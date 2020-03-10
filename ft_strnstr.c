/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:33:19 by mpasturi          #+#    #+#             */
/*   Updated: 2020/03/09 20:07:32 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	if (needle[index] == '\0')
		return ((char *)haystack);
	while (haystack[index] != '\0' && index <= len)
	{
		if (haystack[index] == needle[0])
		{
			count = 0;
			while (needle[count] != '\0' &&
				haystack[index + count] == needle[count] &&
				(index + count) < len)
			{
				count++;
			}
			if (needle[count] == '\0')
				return ((char *)&haystack[index]);
		}
		index++;
	}
	return (0);
}
