/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:59:04 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 00:59:23 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_sort(t_list **stack_a, t_list **stack_b)
{
	int	select;

	select = 0;
	if (ft_lstsize(*stack_b) > 0 && ft_sort(*stack_a))
		select += 1;
	else if (ft_lstsize(*stack_a) > 0 && !ft_sort(*stack_a))
		select += 2;
	if (select == 1)
		ft_pa(stack_a, stack_b);
	if (select == 2)
		ft_pb(stack_b, stack_a);
}
