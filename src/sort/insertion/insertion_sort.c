/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:27:56 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 00:59:26 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insertion_sort(t_list	**stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	while (!ft_sort(*stack_a) || ft_lstsize(stack_b))
	{	
		rrotate_sort(stack_a, &stack_b);
		rotate_sort(stack_a, &stack_b);
		swap_sort(stack_a, &stack_b);
		push_sort(stack_a, &stack_b);
	}
}
