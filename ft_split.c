/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:33:36 by mlongo            #+#    #+#             */
/*   Updated: 2023/03/30 12:50:00 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char s, char c)
{
	return (s == c || s == 0);
}

int	count_wrds(char *str, char c)
{
	int i;

	i = 0;
	while (*str != 0)
	{
		while(is_sep(*str, c))
			str++;
		i++;
		while(!is_sep(*str, c))
			str++;
	}
	return (i);
}

char	*write_wrd(char *split, int c, char *str)
{
	while (!is_sep(str[i]))
	{
		split[i] = str[i];
		i++;
	}
	str[i] = 0;
}

char	**write_split(char **split, char *str, char c, int countwrds)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(j < countwrds)
	{
		while (is_sep(*str, c))
			str++;
		i = 0;
		while (!is_sep(*str[i], c))
			i++;
		split[j] = (char *)malloc(i + 1);
		split[j] = write_wrd(split[j], c, str);
		while (!is_sep(*str, c))
			str++;
		j++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	char	**split;

	i = count_wrds(s, c);
	split = (char **)malloc(i + 1);
	if (split == NULL)
		return (NULL);
	split = write_split(split, s, c);
	return (split);
}
