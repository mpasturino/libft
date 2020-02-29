/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 12:52:34 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/29 11:54:07 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lenchar(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		n = n + 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	str = malloc((ft_lenchar(n) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		i++;
	}
	str[ft_lenchar(n)] = '\0';
	len = ft_lenchar(n) - 1;
	while (len >= i)
	{
		if (n < 0)
			str[len] = (n % 10) * -1 + 48;
		else
			str[len] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (str);
}
