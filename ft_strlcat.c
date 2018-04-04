/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:01:08 by aquint            #+#    #+#             */
/*   Updated: 2017/09/22 13:50:11 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strlcat(char *dst, char const *src, size_t size)
{
	int		len_dst;
	int		len_src;
	size_t	len;

	len_dst = 0;
	len = size;
	len_src = ft_strlen(src);
	while (*dst != '\0' && len-- != 0)
	{
		dst++;
		len_dst++;
	}
	len = size - len_dst;
	if (len != 0)
	{
		while (src != '\0' && len-- != 1)
		{
			*dst = *src;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (len_dst + len_src);
}
