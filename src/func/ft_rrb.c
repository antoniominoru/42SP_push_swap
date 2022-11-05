/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:25 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 00:16:36 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) > 1)
	{
		ft_lstrrotate(stack_b);
		ft_printf("rrb\n");
	}
}
