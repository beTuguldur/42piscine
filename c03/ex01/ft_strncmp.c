/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:00:30 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/30 18:11:30 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abc", 0));  
	printf("%d\n", ft_strncmp("abc", "abd", 2));   
	printf("%d\n", ft_strncmp("abc", "abd", 3));  
	printf("%d\n", ft_strncmp("ab", "abc", 3));    
	printf("%d\n", ft_strncmp("abc", "ab", 3));    

	return (0);
}
*/