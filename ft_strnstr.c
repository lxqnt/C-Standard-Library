/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:40:37 by aquint            #+#    #+#             */
/*   Updated: 2017/08/03 22:33:12 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char		*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	int			i;
	size_t		b;
	const char	*loc;

	b = 0;
	if (*needle == '\0')
		return ((char*)hay);
	while (b < len && hay[b] != '\0')
	{
		i = 0;
		if (needle[i] == hay[b])
		{
			loc = &hay[b];
			while (needle[i] == hay[b] && b <= len)
			{
				i++;
				b++;
				if (needle[i] == '\0')
					return ((char*)loc);
			}
		}
		b = (b - i);
		b++;
	}
	return (NULL);
}
