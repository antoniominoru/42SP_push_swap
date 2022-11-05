/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:56:36 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 00:56:55 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sort(t_list **stack_a, t_list **stack_b)
{
	int	select;

	select = 0;
	if (ft_lstsize(*stack_a) > 1 && \
	(*stack_a)->content > (*stack_a)->next->content)
		select += 1;
	if (ft_lstsize(*stack_b) > 1 && \
	(*stack_b)->content < (*stack_b)->next->content)
		select += 2;
	if (select == 1)
		ft_sa(stack_a);
	if (select == 2)
		ft_sb(stack_b);
	if (select == 3)
		ft_ss(stack_a, stack_b);
}
