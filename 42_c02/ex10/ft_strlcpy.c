/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:33:11 by mobenhab          #+#    #+#             */
/*   Updated: 2025/08/20 14:36:47 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	dest[] = "hicham";
	char	src[] = "yoohhhhho";
	unsigned int	a = 8;

	printf("%d", ft_strlcpy( dest, src, a));
	printf("%s", dest);
}*/
