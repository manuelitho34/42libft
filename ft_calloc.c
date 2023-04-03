/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:19:09 by mlongo            #+#    #+#             */
/*   Updated: 2023/03/29 15:27:35 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	int		cond;

	cond = size * count;
	res = (void *)malloc(cond);
	if (res == NULL)
		return (NULL);
	while (cond--)
		((char *)res)[cond] = 0;
	return (res);
}
