/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_ref.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:07:45 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 03:06:02 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_ref(t_list	*stack_a, int ref, int digit)
{
	int		len;
	int		count;
	int		total_ref;
	t_list	*tmp;

	if (!stack_a)
		return (0);
	tmp = stack_a;
	len = ft_lstsize(tmp);
	count = 0;
	total_ref = 0;
	while (count < len)
	{
		if (ref == tmp->index % digit)
			total_ref++ ;
		tmp = tmp->next;
		count++;
	}
	return (total_ref);
}
