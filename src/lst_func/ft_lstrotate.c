/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:52:16 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/17 18:37:13 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst_lib.h"

void	ft_lstrotate(t_list	**rotate)
{
	t_list	*current;

	current = ft_lstnew_int((*rotate)->content, (*rotate)->index);
	ft_lstdel_next(rotate);
	ft_lstadd_back(rotate, current);
}
