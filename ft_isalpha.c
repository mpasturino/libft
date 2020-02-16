/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:34:05 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/01 20:14:42 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char uc;

	uc = ((unsigned char)c);
	if ((uc >= 'A' && uc <= 'Z') || (uc >= 'a' && uc <= 'z'))
	{
		return (1);
	}
	return (0);
}
