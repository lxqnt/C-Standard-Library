/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraydel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:51:45 by aquint            #+#    #+#             */
/*   Updated: 2017/07/21 02:48:43 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_arraydel(char **array)
{
	int i;

	i = 0;
	if (array)
	{
		while (array[i])
			free(array[i++]);
		free(array);
		*array = NULL;
	}
}
