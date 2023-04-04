/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <gde-vito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:05:42 by gde-vito          #+#    #+#             */
/*   Updated: 2023/04/04 09:59:47 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_sign(char c)
{
	return (c == '-' || c == '+');
}

int static	ft_spaces(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r'
		|| c == '\v' || c == '\f');
}

int	ft_atoi(const char *nptr)
{
	char	*p;
	int		s;
	int		r;

	p = (char *) nptr;
	s = 1;
	r = 0;
	while (ft_spaces(*p))
		p++;
	if (ft_sign(*p))
	{
		if (*p == '-')
			s = -1;
		p++;
	}
	while (ft_isdigit((int) *p))
	{
		r *= 10;
		r += *(p++) - 48;
	}
	return (r * s);
}
