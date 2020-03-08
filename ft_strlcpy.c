/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:16:18 by mpasturi          #+#    #+#             */
/*   Updated: 2020/03/08 15:57:17 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	count_src;

	index = 0;
	count_src = ft_strlen(src);
	if (src == 0)
		return (0);
	if (dstsize != 0)
	{
		while (index < dstsize - 1 && index < count_src)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (count_src);
}
