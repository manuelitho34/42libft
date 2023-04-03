/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:33:36 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/03 13:13:51 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char s, char c)
{
	return (s == c || s == 0);
}

static int	count_wrds(char *str, char c)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		while (is_sep(*str, c))
			str++;
		i++;
		while (!is_sep(*str, c))
			str++;
	}
	return (i);
}

static void	ft_free(char **strs, int i)
{
	while (strs[i])
		free(strs[i--]);
	free(strs);
}

static void	write_split(char **split, char *str, char c, int countwrds)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < countwrds)
	{
		while (is_sep(*str, c))
			str++;
		i = 0;
		while (!is_sep(str[i], c))
			i++;
		split[j] = ft_substr(str, 0, i);
		if (split[j] == NULL)
			ft_free(split, j);
		while (!is_sep(*str, c))
			str++;
		j++;
	}
	split[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;
	char	*str;

	str = (char *)s;
	i = count_wrds(str, c);
	split = (char **)malloc(sizeof(char *) * (i + 1));
	if (split == NULL)
		return (NULL);
	write_split(split, str, c, i);
	return (split);
}
