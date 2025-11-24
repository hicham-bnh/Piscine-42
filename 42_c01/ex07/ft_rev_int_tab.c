/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:42:33 by mobenhab          #+#    #+#             */
/*   Updated: 2025/08/16 13:57:19 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	condi;

	condi = size;
	i = 0;
	while (i < (condi / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		i++;
	}
}

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     main(void)
{
        int     tab[5];
        int     i;

        tab[0] = 5;
        tab[1] = 9;
        tab[2] = 0;
        tab[3] = 8;
        tab[4] = 2;

        ft_rev_int_tab(tab, 5);
        while (i != 5)
        {
                ft_putchar(tab[i] + '0');
                i++;
        }
}*/
