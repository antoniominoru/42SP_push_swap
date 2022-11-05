/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:08:30 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 20:13:48 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*select_range(t_list	**stack_a, int digit, int direction)
{
	t_list	*list;
	int		num;
	int		max;

	list = NULL;
	num = 0;
	max = ft_lstsize(*stack_a);
	if (direction == 1)
	{
		while (num <= max)
		{
			list = insert_range(stack_a, list, digit, num);
			num++;
		}
	}
	else
	{
		while (max >= num)
		{
			list = insert_range(stack_a, list, digit, max);
			max--;
		}
	}
	return (list);
}
