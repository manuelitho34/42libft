/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessiolongo <alessiolongo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:59:55 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/02 14:20:43 by alessiolong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && *str != ((unsigned char)c))
		str++;
	if (!*str && c != 0)
		return (NULL);
	return (str);
}
