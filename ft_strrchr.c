/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:12:20 by aquint            #+#    #+#             */
/*   Updated: 2017/07/22 15:57:13 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	const char	*fnd;
	int			i;

	i = (ft_strlen(s));
	fnd = 0;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			fnd = &s[i];
			return ((char*)fnd);
		}
		i--;
	}
	return (NULL);
}
