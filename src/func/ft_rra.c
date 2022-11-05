/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:15:49 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 00:16:08 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) > 1)
	{
		ft_lstrrotate(stack_a);
		ft_printf("rra\n");
	}
}
