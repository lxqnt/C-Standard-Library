/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:12:20 by aquint            #+#    #+#             */
/*   Updated: 2017/09/21 22:27:53 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	const char	*fnd;
	int			i;

	i = 0;
	fnd = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			fnd = &s[i];
			return ((char*)fnd);
		}
		i++;
	}
	if (c == '\0')
	{
		fnd = &s[i];
		return ((char*)fnd);
	}
	else
		return (NULL);
}
