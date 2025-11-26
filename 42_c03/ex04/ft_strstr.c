/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:33:16 by mobenhab          #+#    #+#             */
/*   Updated: 2025/08/21 16:41:52 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ft_strlen(to_find);
	if (size == 0)
		return (str);
	if (to_find[0] == '\0')
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "asdasdasdtoiasdpot";
	printf("%s\n", ft_strstr(str, ""));
	printf("%s\n", strstr(str, ""));
	printf("===================\n");
	printf("%s\n", ft_strstr("", ""));
	printf("%s\n", strstr("", ""));
	printf("===================\n");
	printf("%s\n", ft_strstr("", "toi"));
	printf("%s\n", strstr("", "toi"));
	printf("===================\n");
	printf("%s\n", ft_strstr(str, "pot"));
	printf("%s\n", strstr(str, "pot"));
	printf("===================\n");;
	printf("%s\n", ft_strstr(str, "vccv"));
	printf("%s\n", strstr(str, "vccv"));
	printf("===================\n");
}*/
