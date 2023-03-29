/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:28:37 by mlongo            #+#    #+#             */
/*   Updated: 2023/03/29 15:52:26 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len);
{
	int	i;
	char *str;

	i = 0;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (str[start + 1]  && size > i)
	{
		str[i] = s[start + i];
		i++;
	}
	while (str[i])
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
