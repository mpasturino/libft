/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:12:55 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/15 20:22:12 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	z;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((len + 1) * sizeof(char));
	i = 0;
	z = 0;
	while (s1[z] != '\0')
	{
		str[i] = s1[z];
		i++;
		z++;
	}
	z = 0;
	while (s2[z] != '\0')
	{
		str[i] = s2[z];
		i++;
		z++;
	}
	str[i] = '\0';
	return (str);
}
