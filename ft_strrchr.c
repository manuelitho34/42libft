/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:16:17 by mlongo            #+#    #+#             */
/*   Updated: 2023/03/28 17:54:30 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	len = ft_strlen((char *)s);
	while (len >= 0 && s[len] != ((unsigned char)c))
		len--;
	if (len < 0)
		return (NULL);
	return ((char *)(s + len));
}
