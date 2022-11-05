/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:57:21 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 00:57:43 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_sort(t_list **stack_a, t_list **stack_b)
{
	int	select;

	select = 0;
	if (ft_lstsize(*stack_a) > 1 && \
	(*stack_a)->content > ft_lstlast(*stack_a)->content)
		select += 1;
	if (ft_lstsize(*stack_b) > 1 && \
	(*stack_b)->content < ft_lstlast(*stack_b)->content)
		select += 2;
	if (select == 1)
		ft_ra(stack_a);
	if (select == 2)
		ft_rb(stack_b);
	if (select == 3)
		ft_rr(stack_a, stack_b);
}
