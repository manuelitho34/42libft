/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:00:04 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/03 16:55:03 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned char	*s;
	int				i;
	int				sign;
	int				r;

	s = (unsigned char *)str;
	i = 0;
	sign = 1;
	r = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\r'
		|| s[i] == '\f' || s[i] == '\t' || s[i] == '\v')
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		r = r * 10;
		r = r + s[i] - 48;
		i++;
	}
	return (r * sign);
}
