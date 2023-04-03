/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:18:03 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/03 15:43:51 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	int		lenght;
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	lenght = ft_strlen(src) + ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && j + i < size - 1)
	{
		dst[j + i] = src[j];
		j++;
	}
	if (i < size || !size)
		dst[j + i] = 0;
	else
		return (ft_strlen(src) + size);
	return (lenght);
}
