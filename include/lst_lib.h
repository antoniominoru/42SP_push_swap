/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_lib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:45:29 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/19 01:04:53 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_LIB_H
# define LST_LIB_H

# include "../lib/libft/libft.h"

void	ft_del(int content);
void	ft_lstdel_next(t_list **lst);
void	ft_lstswap(t_list	**swap);
void	ft_lstrotate(t_list	**rotate);
void	ft_lstrrotate(t_list	**rrotate);
void	ft_lstpush(t_list	**push1, t_list	**push2);
t_list	*ft_lstnew_int(int content, int index);
void	ft_lstdelone_int(t_list *lst, void (del)(int));
void	ft_lstclear_int(t_list **lst, void (del)(int));
void	ft_print_list(t_list *stack);

#endif