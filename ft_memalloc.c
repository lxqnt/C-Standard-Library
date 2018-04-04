/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:50:38 by aquint            #+#    #+#             */
/*   Updated: 2017/10/03 12:05:42 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	size_t	i;
	void	*str;

	i = 0;
	str = (void*)malloc(size);
	if (str != NULL)
	{
		ft_bzero(str, size);
	}
	return (str);
}
