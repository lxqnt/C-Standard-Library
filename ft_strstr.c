/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:40:37 by aquint            #+#    #+#             */
/*   Updated: 2017/09/28 03:02:18 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *hay, const char *needle)
{
	int		i;
	int		b;
	char	*loc;

	b = 0;
	if (*needle == '\0')
		return ((char*)hay);
	while (hay[b] != '\0')
	{
		i = 0;
		if (needle[i] == hay[b])
		{
			loc = (char*)&hay[b];
			while (needle[i] == hay[b])
			{
				i++;
				b++;
				if (needle[i] == '\0')
					return (loc);
			}
		}
		b = (b - i);
		b++;
	}
	return (NULL);
}
