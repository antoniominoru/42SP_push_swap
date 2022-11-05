/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_sm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:12:35 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 18:38:05 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_sm(t_list	**stack_a, t_list	**stack_b, int digit, int range_pos)
{
	int	count;
	int	dif_ref;

	dif_ref = 0;
	count = find_ref(*stack_b, range_pos, digit);
	dif_ref = find_dir(*stack_b, range_pos, digit);
	while (count)
	{
		if ((*stack_b)->index % digit < range_pos)
		{
			if (dif_ref >= 0)
				ft_rb(stack_b);
			else
				ft_rrb(stack_b);
		}
		else
		{
			count--;
			ft_pa(stack_a, stack_b);
		}
	}
}
