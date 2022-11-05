/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_sort_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:20:40 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/15 01:04:14 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	select_sort_type(t_list	**stack_a)
{
	if (ft_lstsize(*stack_a) < 6)
		insertion_sort(stack_a);
	else
		radix_sort(stack_a);
}
