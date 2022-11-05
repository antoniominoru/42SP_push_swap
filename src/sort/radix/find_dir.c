/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_dir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:07:08 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 18:37:38 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_dir(t_list *stack_a, int ref, int digit)
{
	int	result;
	int	ref_count;

	ref_count = select_ref_count(stack_a, ref, digit);
	result = select_dir(stack_a, ref_count, ref, digit);
	return (result);
}
