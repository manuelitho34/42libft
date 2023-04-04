/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <gde-vito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:33:38 by gde-vito          #+#    #+#             */
/*   Updated: 2023/04/03 17:02:23 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;

	x = (unsigned char) c;
	i = 0;
	while (i < n)
		((unsigned char *) s)[i++] = x;
	return (s);
}
