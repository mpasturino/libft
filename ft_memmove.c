/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 15:24:22 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/15 16:42:01 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	if (src == dst)
	{
		return (0);
	}
	if (((unsigned char*)dst) < ((unsigned char*)src))
		ft_memcpy(dst, src, len);
	else
	{
		while (i--)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		}
	}
	return (dst);
}
