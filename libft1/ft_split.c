/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:02:40 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/22 17:11:53 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*allocate_word(const char **s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, *s, len + 1);
	*s += len;
	return (word);
}

static void	free_array(char **arr)
{
	int	i;

	i = 0;
	while (arr && arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	fill_array(char **res, const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			res[i] = allocate_word(&s, c);
			if (!res[i])
			{
				free_array(res);
				return (0);
			}
			i++;
		}
	}
	res[i] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!fill_array(res, s, c))
		return (NULL);
	return (res);
}
