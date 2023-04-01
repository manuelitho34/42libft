/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessiolongo <alessiolongo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:58:11 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/01 15:13:33 by alessiolong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_malloc(int n, int cont, int *i)
{
	char	*str;

	if (n >= 0)
		str = (char *)malloc(cont + 1);
	else
	{
		str = (char *)malloc(cont + 2);
		str[*i] = '-';
		*i = *i + 1;
	}
	return (str);
}

static char	*fill_array(char *str, int n, int *i)
{
	if (n == -2147483648)
	{
		str[*i] = '2';
		*i = *i + 1;
		n = 147483648;
	}
	if (n > 9 || n < -9)
	{
		fill_array(str, n / 10, i);
		fill_array(str, n % 10, i);
	}
	else
	{
		if (n < 0)
			str[*i] = -n + 48;
		else
			str[*i] = n + 48;
		*i = *i + 1;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		nbr;
	char	*str;
	int		cont;

	i = 0;
	nbr = n;
	cont = 1;
	if (n == -2147483648)
		cont = 10;
	else
	{
		while (nbr > 9 || nbr < -9)
		{
			nbr = nbr / 10;
			cont++;
		}
	}
	str = get_malloc(n, cont, &i);
	str = fill_array(str, n, &i);
	str[i] = 0;
	return (str);
}
