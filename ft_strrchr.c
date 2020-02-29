/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:42:11 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/29 20:27:40 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	int		i;
	char	*str_cpy;

	str_cpy = (char *)s;
	len = ft_strlen(str_cpy);
	i = len - 1;
	if (c == '\0')
		return (&str_cpy[len]);
	while (i >= 0)
	{
		if (str_cpy[i] == c)
			return (&str_cpy[i]);
		i--;
	}
	return (0);
}
