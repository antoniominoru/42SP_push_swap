/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_fm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:11:27 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 18:38:00 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_fm(t_list	**stack_a, t_list	**stack_b, int digit, int range_pos)
{
	int	count;
	int	dif_ref;

	dif_ref = 0;
	count = find_ref(*stack_a, range_pos, digit);
	dif_ref = find_dir(*stack_a, range_pos, digit);
	while (count)
	{
		if ((*stack_a)->index % digit > range_pos)
		{
			if (dif_ref >= 0)
				ft_ra(stack_a);
			else
				ft_rra(stack_a);
		}
		else
		{
			count--;
			ft_pb(stack_b, stack_a);
		}
	}
}
