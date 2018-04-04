/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 12:00:21 by aquint            #+#    #+#             */
/*   Updated: 2017/08/11 15:11:40 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *node;
	t_list *tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	if (!(node = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	lst = lst->next;
	new = node;
	while (lst)
	{
		tmp = (*f)(lst);
		if (!(node->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		lst = lst->next;
		node = node->next;
	}
	return (new);
}
