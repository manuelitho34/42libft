/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:33:33 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/03 15:36:45 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*res;

	start = 0;
	end = ft_strlen((char *)s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end && ft_strchr(set, s1[end]))
		end--;
	if (end == 0)
	{
		res = (char *)malloc(1);
		res[0] = 0;
		return (res);
	}
	res = (char *)malloc(end - start + 2);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, (const char *)(s1 + start), (end - start + 2));
	return (res);
}
