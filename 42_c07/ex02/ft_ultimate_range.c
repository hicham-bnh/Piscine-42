/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 22:19:39 by mobenhab          #+#    #+#             */
/*   Updated: 2025/09/03 09:32:14 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (-1);
	else
	{
		i = 0;
		while (i < size)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	*range = tab;
	return (size);
}
/*
int	main(void)
{
	int	min = 0;
	int	max = 5;
	int	*tab;
	int	i;

	i = 0;
	printf("%d\n", ft_ultimate_range(&tab, min, max));
	while (i < max - min)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
}*/
