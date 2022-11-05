/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:33:24 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 21:09:52 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list	**stack_a)
{
	int		digit;
	t_list	*stack_b;

	stack_b = NULL;
	digit = 1;
	tag_sort(stack_a);
	while (!ft_sort(*stack_a))
	{
		digit *= 10;
		radix_first(stack_a, &stack_b, digit);
		digit *= 10;
		radix_second(stack_a, &stack_b, digit);
	}
}
