/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 22:25:40 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/29 21:31:48 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count_dst;
	size_t	count_src;
	size_t	j;
	size_t	i;

	count_dst = ft_strlen(dst);
	count_src = ft_strlen(src);
	i = count_dst;
	if (dst == src)
		return (0);
	if (dstsize != 0 && i < (dstsize - 1))
	{
		j = 0;
		while (i < (dstsize - 1) && src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (count_dst > dstsize)
		return (dstsize + count_src);
	return (count_src + count_dst);
}
