/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tag_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:19:50 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 18:20:05 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tag_set(t_list *stack_a, int ref, int index)
{
	t_list	*tmp;
	int		count;
	int		len;

	count = 0;
	tmp = stack_a;
	len = ft_lstsize(stack_a);
	while (count < len)
	{
		if (ref == tmp->content)
		{
			tmp->index = index;
			break ;
		}
		tmp = tmp->next;
		count++;
	}
}
