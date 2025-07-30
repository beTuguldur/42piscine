/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:00:11 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/29 14:20:59 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int main(void)
{
    char src[] = "HelloWorld";
char dest[6];
unsigned int len = ft_strlcpy(dest, src, sizeof(dest));
printf("dest = %s\n", dest); 
printf("len = %u\n", len);   
}
*/