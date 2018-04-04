/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:58:10 by aquint            #+#    #+#             */
/*   Updated: 2017/10/01 21:18:43 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*tmp;

	if (!s)
		return (NULL);
	tmp = (char*)s;
	sub = (char*)malloc(sizeof(sub) * len + 1);
	if (sub != NULL)
	{
		ft_strncpy(sub, &tmp[start], len);
		sub[len] = '\0';
		return (sub);
	}
	return (NULL);
}
