/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:08:18 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 21:43:40 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst_lib.h"

void	ft_lstclear_int(t_list **lst, void (del)(int))
{
	t_list	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone_int(*lst, del);
		*lst = tmp;
	}
}
