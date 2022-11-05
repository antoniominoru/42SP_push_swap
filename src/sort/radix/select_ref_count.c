/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_ref_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:14:41 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 18:15:00 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	select_ref_count(t_list *stack_a, int ref, int digit)
{
	t_list	*tmp;
	int		count;
	int		len;
	int		ref_count;

	tmp = stack_a;
	len = ft_lstsize(tmp);
	count = 0;
	ref_count = 0;
	while (count < len)
	{
		if (ref == tmp->index % digit)
			ref_count++;
		tmp = tmp->next;
		count++;
	}
	return (ref_count);
}
