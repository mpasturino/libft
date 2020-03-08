/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:30:52 by mpasturi          #+#    #+#             */
/*   Updated: 2020/03/08 16:38:23 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (s1 == 0 || set == 0)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (start < ft_strlen(s1) && ft_isset(s1[start], set) == 1)
		start++;
	while (end > 0 && ft_isset(s1[end], set) == 1)
		end--;
	if (start == ft_strlen(s1))
	{
		str = malloc(1 * sizeof(char));
		if (str == 0)
			return (0);
		str[0] = '\0';
	}
	else
	{
		str = ft_substr(s1, ((unsigned int)start), (end - start + 1));
	}
	return (str);
}
