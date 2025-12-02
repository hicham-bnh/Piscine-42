/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:44:46 by mobenhab          #+#    #+#             */
/*   Updated: 2025/09/03 11:31:32 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	it_sep(char c, char *charset)
{
	while (*charset != c && *charset)
		charset++;
	return (*charset == c);
}

int	count_word(char *str, char *charset)
{
	int	words;

	words = 0;
	while (*str)
	{
		while (*str && it_sep(*str, charset))
			str++;
		while (*str && !it_sep(*str, charset))
			str++;
		words++;
	}
	return (words);
}

char	**ft_strdup(char *str, char *charset, int words)
{
	int		i;
	int		len;
	char	**res;

	len = 0;
	res = malloc(sizeof(char *) * (words + 1));
	while (*str && words)
	{
		i = 0;
		while (it_sep(*str, charset) && *str)
			str++;
		while (!it_sep(*str, charset) && *str)
		{
			str++;
			i++;
		}
		if (i != 0)
			res[len] = malloc(sizeof(char) * (i + 1));
		len++;
	}
	res[len] = NULL;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		len;
	char	**strs;

	i = 0;
	len = 0;
	strs = ft_strdup(str, charset, count_word(str, charset));
	while (*str)
	{
		while (it_sep(*str, charset) && *str)
			str++;
		while (!it_sep(*str, charset) && *str)
		{
			strs[len][i] = *str;
			str++;
			i++;
		}
		if (i != 0)
			strs[len][i] = '\0';
		i = 0;
		len++;
	}
	return (strs);
}
