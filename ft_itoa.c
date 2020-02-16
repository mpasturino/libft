/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 12:52:34 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/16 17:11:57 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int		ft_lenchar(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	ft_numchar(int n)
{
	char	c;

	c = 48 + n;
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_isnegative(n) + ft_lenchar(n) + 1;
	str = malloc(len * sizeof(char));
	if (str == 0)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	str[len - 1] = '\0';
	while (n > 0)
	{
		str[len - 2] = ft_numchar(n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}
