/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 21:43:03 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/01 22:20:45 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	i = 0;
	uc_dst = ((unsigned char*)dst);
	uc_src = ((unsigned char*)src);
	if (dst == src)
		return (0);
	while (i < n)
	{
		(uc_dst)[i] = (uc_src)[i];
		if ((uc_src)[i] == ((unsigned char)c))
		{
			return (&uc_dst[i + 1]);
		}
		i++;
	}
	return (0);
}
