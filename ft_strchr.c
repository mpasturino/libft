/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 19:14:02 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/01 20:36:07 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int index;
	int	len;

	index = 0;
	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	while (s[index] != '\0')
	{
		if (s[index] == c)
			return ((char *)(s + index));
		s++;
	}
	return (0);
}
