/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 18:24:59 by aquint            #+#    #+#             */
/*   Updated: 2017/09/28 03:03:20 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *cat_str;

	if (!s1 || !s2)
		return (NULL);
	cat_str = (char*)malloc(sizeof(*cat_str) *
			((ft_strlen(s1)) + (ft_strlen(s2)) + 1));
	if (cat_str != NULL)
	{
		cat_str = ft_strcpy(cat_str, s1);
		cat_str = ft_strcat(cat_str, s2);
		return (cat_str);
	}
	return (NULL);
}
