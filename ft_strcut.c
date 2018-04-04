/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 19:10:39 by aquint            #+#    #+#             */
/*   Updated: 2017/08/09 14:36:57 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char		*ft_strcut(char const *s, char dl)
{
	char	*trim;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	trim = (char*)malloc(sizeof(*trim) *
			((ft_strlen(s)) - (ft_dlcount(s, dl)) + 1));
	if (trim != NULL)
	{
		while (*s != '\0')
		{
			if (*s != dl)
				trim[i++] = *s;
			s++;
		}
		trim[i] = '\0';
		return (trim);
	}
	return (NULL);
}
