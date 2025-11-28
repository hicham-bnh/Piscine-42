/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:52:21 by mobenhab          #+#    #+#             */
/*   Updated: 2025/08/24 12:40:27 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	skip_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = skip_space(str);
	sign = 1;
	result = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	printf("%d", ft_atoi(" 	 	--+--+1234ab567"));
}*/
