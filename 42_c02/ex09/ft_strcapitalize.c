/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:52:52 by mobenhab          #+#    #+#             */
/*   Updated: 2025/08/20 14:37:48 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	while (str[i])
	{
		if ((str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'z')
				&& (str[i - 1] < '0' || str[i - 1] > '9'))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one ha.a y.b";

	ft_strcapitalize(str);
	printf("%s", str);
}*/
