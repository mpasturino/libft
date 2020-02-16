/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 20:57:21 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/16 17:35:56 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(char *str)
{
	int i;

	i = 0;
	while (str[i] == 32
			|| str[i] == '\n'
			|| str[i] == '\t'
			|| str[i] == '\v'
			|| str[i] == '\f'
			|| str[i] == '\r')
		i++;
	return (i);
}

int	ft_signal(char *str, int i)
{
	int signal;

	signal = 1;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signal = signal * -1;
		i++;
	}
	return (signal);
}

int	ft_atoi(char *str)
{
	int i;
	int signal;
	int num;

	i = ft_space(str);
	signal = ft_signal(str, i);
	num = 0;
	if (str[i] == 43 || str[i] == 45)
	{
		i++;
		if (str[i] == 43 || str[i] == 45)
			return (0);
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + str[i] - 48;
		i++;
	}
	return (num * signal);
}
