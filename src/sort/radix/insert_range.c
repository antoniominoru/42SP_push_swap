/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:16:56 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 21:27:35 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*insert_range(t_list	**stack_a, t_list	*list, int digit, int num)
{
	t_list	*tmp;
	int		i;
	int		count;

	i = 0;
	tmp = *stack_a;
	count = ft_lstsize(*stack_a);
	while (i < count)
	{
		if (tmp->index % digit == num)
		{
			if (!list)
				list = ft_lstnew_int(num, START_INDEX);
			else
				ft_lstadd_back(&list, ft_lstnew_int(num, START_INDEX));
			break ;
		}
		tmp = tmp->next;
		i++;
	}
	return (list);
}
