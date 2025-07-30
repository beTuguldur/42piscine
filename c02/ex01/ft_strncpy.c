/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:25:50 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/29 11:08:37 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "hello world";
    char dest[15];

    printf("Before copy:\n");
    printf("src : %s\n", src);
    printf("dest: %s\n", dest); 

    ft_strncpy(dest, src, 8);  

    printf("\nAfter copy:\n");
    printf("src : %s\n", src);
    printf("dest: %s\n", dest); 

    return 0;
}
*/
