/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 00:02:41 by aquint            #+#    #+#             */
/*   Updated: 2017/08/04 17:25:51 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	new_str = (char*)malloc(sizeof(*new_str) * (ft_strlen(s) + 1));
	if (new_str)
	{
		while (s[i] != '\0')
		{
			new_str[i] = (*f)(s[i]);
			i++;
		}
		new_str[i] = '\0';
		return (new_str);
	}
	else
		return (NULL);
}
