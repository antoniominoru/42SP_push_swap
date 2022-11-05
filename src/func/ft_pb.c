/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:19:02 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 00:15:01 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_list **stack_b, t_list **stack_a)
{
	if (ft_lstsize(*stack_a) > 0)
	{
		ft_lstpush(stack_b, stack_a);
		ft_printf("pb\n");
	}
}
