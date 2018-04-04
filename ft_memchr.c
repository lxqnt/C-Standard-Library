/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 20:08:07 by aquint            #+#    #+#             */
/*   Updated: 2017/09/21 22:29:43 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*tmp_s;

	ch = (unsigned char)c;
	tmp_s = (unsigned char*)s;
	while (n > 0)
	{
		if (*tmp_s == ch)
			return (tmp_s);
		tmp_s++;
		n--;
	}
	return (NULL);
}
