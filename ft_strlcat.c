/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:18:03 by mlongo            #+#    #+#             */
/*   Updated: 2023/03/29 12:59:25 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	itot;
	size_t	i;

	i = 0;
	itot = 0;
	while (dst[itot])
		itot++;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (dstsize > (i + itot) && src[i])
	{
		dst[itot + i] = src[i];
		itot++;
		i++;
	}
	dst[itot] = '\0';
	while (src[i])
		i++;
	return (i + itot);
}
