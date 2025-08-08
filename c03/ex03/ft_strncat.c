/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:59:01 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/29 05:37:15 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int lim)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < lim)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int lim);

int	main(void)
{
	char dest[20] = "Hello00 ";
	char src[] = "World!";

	ft_strncat(dest, src, 5); 
	printf("Result: %s\n", dest); 
	return (0);
}
*/