/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:10:29 by mobenhab          #+#    #+#             */
/*   Updated: 2025/09/03 20:39:18 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	count_len(char **strs, int *len, int size)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			(*len)++;
		}
		i++;
	}
}

void	ft_strcpy(char **strs, char *sep, char *str, int size)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		if (i + 1 != size)
			while (sep[j])
				str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	len = 0;
	count_len(strs, &len, size);
	len += ft_strlen(sep) * (size - 1);
	str = malloc(sizeof(char) * (len + 1));
	ft_strcpy(strs, sep, str, size);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"abca", "abc", "abc", "adbc"};
	printf("%s", ft_strjoin(2, strs, "**"));
}*/
