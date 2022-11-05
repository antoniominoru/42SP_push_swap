/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del_next.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:39:59 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/05 22:20:49 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst_lib.h"

void	ft_lstdel_next(t_list **lst)
{
	t_list	*tmp;

	if (!*lst)
		return ;
	tmp = (*lst)->next;
	ft_lstdelone_int(*lst, ft_del);
	*lst = tmp;
}
