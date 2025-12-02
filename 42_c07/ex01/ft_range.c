/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 22:11:28 by mobenhab          #+#    #+#             */
/*   Updated: 2025/09/03 09:29:11 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
		return (NULL);
	i = 0;
	tab = malloc(sizeof(int) * size);
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	min = -5;
	int	max = 5;
	int	*tab = ft_range(min, max);
	int	i = 0;

	while (i < max - min)
	{
		printf("%d\n" , tab[i]);
		i++;
	}
}*/
