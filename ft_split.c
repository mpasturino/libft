/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 17:13:42 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/29 16:27:57 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countarray(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (i > 0 && s[i - 1] != c)
				count++;
		}
		i++;
	}
	return (count + 1);
}

static size_t	ft_countchar(char const *s, char c, size_t i)
{
	size_t	j;

	j = 0;
	while (s[i + j] != c && (i + j) < ((size_t)ft_strlen(s)))
		j++;
	return (j);
}

static char		**ft_fillmatrix(char const *s, char c, char **matrix, size_t r)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < ((size_t)ft_strlen(s)))
	{
		if (s[i] == c)
			i++;
		else
		{
			j = ft_countchar(s, c, i);
			matrix[r] = (char*)malloc((j + 1) * sizeof(char));
			j = 0;
			while (s[i] != c && i < ((size_t)ft_strlen(s)))
			{
				matrix[r][j] = s[i];
				i++;
				j++;
			}
			matrix[r][j] = '\0';
			r++;
		}
	}
	matrix[r] = NULL;
	return (matrix);
}

char			**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	r;

	if (s == 0)
		return (0);
	matrix = (char**)malloc((ft_countarray(s, c) + 1) * sizeof(char*));
	r = 0;
	if (matrix == 0)
		return (0);
	matrix = ft_fillmatrix(s, c, matrix, r);
	return (matrix);
}
