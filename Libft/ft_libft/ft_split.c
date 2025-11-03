/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:58:52 by  pedrrodr         #+#    #+#             */
/*   Updated: 2024/12/24 10:58:20 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_count(const char *s, char c);
char	*fill_word(const char *s, char c);
void	ft_free(char **s, int count);

char	**ft_split(char const *s, char c)
{
	int		word_total;
	int		i;
	char	**result;

	word_total = word_count(s, c);
	result = malloc(((word_total) + 1) * sizeof(char *));
	if (!result || !s)
		return (NULL);
	i = 0;
	while (*s && i < word_total)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = fill_word(s, c);
			if (!result[i])
				return (ft_free(result, i), NULL);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	result[i] = NULL;
	return (result);
}

int	word_count(const char *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (s == NULL)
		return (0);
	if (s[0] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
			{
				count++;
			}
		}
		i++;
	}
	return (count);
}

void	ft_free(char **s, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		i++;
	}
	free (s);
}

char	*fill_word(const char *s, char c)
{
	int		i;
	int		j;
	char	*word;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0' && s[i] != c)
	{
		count++;
		i++;
	}
	word = malloc((count) + 1);
	if (word == NULL)
		return (NULL);
	i = i - count;
	while (s[i] != '\0' && s[i] != c)
		word[j++] = s[i++];
	word[j] = '\0';
	return (word);
}
