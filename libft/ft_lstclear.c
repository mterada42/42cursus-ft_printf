/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterada <mterada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 00:00:00 by mterada           #+#    #+#             */
/*   Updated: 2026/05/02 07:06:23 by mterada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*next_node;

	if (!lst || !*lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		next_node = list->next;
		ft_lstdelone(list, del);
		list = next_node;
	}
	*lst = NULL;
}
