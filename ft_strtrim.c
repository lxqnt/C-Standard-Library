/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 19:10:39 by aquint            #+#    #+#             */
/*   Updated: 2017/10/03 12:02:52 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static int	endtrim(char const *s)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t' || s[len] == '.')
	{
		len--;
		i++;
	}
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*trim;
	int		i;
	int		ti;
	int		end;
	int		stotal;

	if (!s)
		return (NULL);
	i = 0;
	ti = 0;
	end = 0;
	stotal = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '.')
		i++;
	if (!(i == stotal))
		end = endtrim(s);
	if (!(trim = (char*)malloc(sizeof(*trim) * (stotal + 1 - i - end))))
		return (NULL);
	while (i + end < stotal)
		trim[ti++] = s[i++];
	trim[ti] = '\0';
	return (trim);
}
