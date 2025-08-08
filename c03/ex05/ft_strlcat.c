/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:34:20 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/30 17:54:12 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = ft_strlen(src);
	i = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len == size)
		return (size + src_len);
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int main(void)
{
	char t1[12] = "Hello";
	//char t2[10] = "Hi";
	//char t3[5] = "Hey";

	unsigned int result;

	result = ft_strlcat(t1, " World!", 12);
	printf("Result: %u | ex1: \"%s\"\n", result, t1);

	//result = ft_strlcat(t2, " there", 10);
	//printf("Result: %u | ex2: \"%s\"\n", result, t2);

	//result = ft_strlcat(t3, "TEST", 10);
	//printf("Result: %u | ex3: \"%s\"\n", result, t3);
	return 0;
}
*/
