/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessiolongo <alessiolongo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:00:04 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/01 19:02:18 by alessiolong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
