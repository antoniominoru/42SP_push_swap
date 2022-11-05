/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:47:48 by aminoru-          #+#    #+#             */
/*   Updated: 2022/11/05 01:40:53 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;

	if (argc == 1)
		return (-1);
	valid_all(argc, argv);
	stack_a = make_list(argc, argv);
	select_sort_type(&stack_a);
	ft_lstclear_int(&stack_a, ft_del);
}
