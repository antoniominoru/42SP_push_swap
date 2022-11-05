/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:37:26 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 01:19:21 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*make_list(int argc, char *argv[])
{
	t_list	*stack_a;
	int		i;

	i = 2;
	stack_a = ft_lstnew_int(ft_atoi(argv[1]), START_INDEX);
	while (i < argc)
	{
		ft_lstadd_back(&stack_a, ft_lstnew_int(ft_atoi(argv[i]), START_INDEX));
		i++;
	}
	return (stack_a);
}
