/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 20:05:04 by aquint            #+#    #+#             */
/*   Updated: 2017/08/12 16:23:17 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_diglen(n);
	if (!(str = ft_strnew(len)))
		return (NULL);
	else
	{
		str[len--] = '\0';
		while (len >= 0 && str[len] != '-')
		{
			if (n < 0)
			{
				str[len--] = (-1 * (n % 10)) + 48;
				n = (n / 10) * -1;
				str[0] = '-';
			}
			else
			{
				str[len--] = (n % 10) + 48;
				n = n / 10;
			}
		}
		return (str);
	}
}
