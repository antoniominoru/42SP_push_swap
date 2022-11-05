/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_dir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:15:23 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 18:15:40 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	select_dir(t_list *stack_a, int ref_count, int ref, int digit)
{
	t_list	*tmp;
	int		result;
	int		count;
	int		len;

	len = ft_lstsize(stack_a);
	result = 0;
	while (ref_count--)
	{
		count = 0;
		tmp = stack_a;
		while (count < len)
		{
			if (ref == tmp->index % digit)
				break ;
			tmp = tmp->next;
			count++;
		}
		result += (len / 2) - count;
	}
	return (result);
}
