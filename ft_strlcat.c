/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 22:25:40 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/01 20:22:24 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_length(const char *src)
{
	unsigned int index;

	index = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	return (index);
}

int				ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count_dst;
	unsigned int	count_src;
	unsigned int	res;

	count_dst = ft_length(dst);
	count_src = ft_length(src);
	res = 0;
	if (dstsize == 0)
		return (count_src);
	else
	{
		if (dstsize < count_dst)
			res = dstsize + count_src;
		else
			res = count_dst + count_src;
		count_src = 0;
		while (src[count_src] != '\0' && count_dst < (dstsize - 1))
		{
			dst[count_dst] = src[count_src];
			count_dst++;
			count_src++;
		}
		dst[count_dst] = '\0';
	}
	return (res);
}
