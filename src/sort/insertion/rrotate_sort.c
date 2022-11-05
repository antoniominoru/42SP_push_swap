/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:58:09 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 00:58:49 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_sort(t_list **stack_a, t_list **stack_b)
{
	int	select;

	select = 0;
	if (ft_lstsize(*stack_a) && \
	(*stack_a)->content > ft_lstlast(*stack_a)->content && \
	(*stack_a)->content < (*stack_a)->next->content)
		select += 1;
	if (ft_lstsize(*stack_b) && \
	(*stack_b)->content < ft_lstlast(*stack_b)->content && \
	(*stack_b)->content > (*stack_b)->next->content)
		select += 2;
	if (select == 1)
		ft_rra(stack_a);
	if (select == 2)
		ft_rrb(stack_b);
	if (select == 3)
		ft_rrr(stack_a, stack_b);
}
