/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:20:28 by mobenhab          #+#    #+#             */
/*   Updated: 2025/08/18 09:18:10 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;
	
	c = 5;
	d = 1;
	a = &c;
	b = &d;
	printf("avant a = %d, b = %d \n", *a, *b);
	ft_swap(a, b);
	printf("et apres a = %d, b = %d \n", *a, *b);
}*/
