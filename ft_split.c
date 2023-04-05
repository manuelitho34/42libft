/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:16:11 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/05 13:55:44 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static int	ft_free(char **split, int i)
{
	if (split[i] == NULL)
	{
		while (i)
			free(split[i--]);
		free(split);
		return (1);
	}
	return (0);
}

static void	allocate(size_t *i, size_t *j, int *x)
{
	*i = 0;
	*j = 0;
	*x = -1;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	allocate(&i, &j, &index);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (s == NULL || split == NULL)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			if (ft_free(split, (int) j - 1))
				return (NULL);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
