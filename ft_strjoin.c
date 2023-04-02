/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:52:57 by mlongo            #+#    #+#             */
/*   Updated: 2023/03/29 16:17:52 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*res;
	int		lentot;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = (char *)malloc(len1 + len2 + 1);
	if (res == NULL)
		return (NULL);
	res[len1 + len2] = 0;
	lentot = len1 + len2;
	while (lentot > len1 + 1)
		res[--lentot] = s2[--len2];
	while (len1--)
		res[len1] = s1[len1];
	return (res);
}
