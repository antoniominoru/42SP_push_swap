/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:17:49 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 00:18:01 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) > 1)
	{
		ft_lstrotate(stack_b);
		ft_printf("rb\n");
	}
}
