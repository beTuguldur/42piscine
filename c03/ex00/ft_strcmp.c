/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:46:18 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/28 15:59:20 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("hello", "hello")); 
	printf("%d\n", ft_strcmp("abc", "abd"));     
	printf("%d\n", ft_strcmp("xyz", "xy"));      
    printf("%d\n", ft_strcmp("866", "64")); 
    printf("%d\n", ft_strcmp("24", "64")); 

	return (0);
}
*/