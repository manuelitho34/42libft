/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <gde-vito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:31:24 by gde-vito          #+#    #+#             */
/*   Updated: 2023/04/04 15:57:43 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return ((char *)(s + i));
		i--;
	}
	if (i)
		return (0);
	return ((char *)(s + i));
}
