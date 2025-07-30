/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:19:25 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/29 10:54:29 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_numeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (new_word && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (is_alpha_numeric(str[i]))
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char test1[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char test2[] = "hello WORLD";
	char test3[] = "tEsTInG muLTiPle    SPACES";
	char test4[] = "123abc DEF ghi";
	char test5[] = "";

	printf("Original: %s\n", test1);
	printf("Capitalized: %s\n\n", ft_strcapitalize(test1));

	printf("Original: %s\n", test2);
	printf("Capitalized: %s\n\n", ft_strcapitalize(test2));

	printf("Original: %s\n", test3);
	printf("Capitalized: %s\n\n", ft_strcapitalize(test3));

	printf("Original: %s\n", test4);
	printf("Capitalized: %s\n\n", ft_strcapitalize(test4));

	printf("Original: \"%s\"\n", test5);
	printf("Capitalized: \"%s\"\n", ft_strcapitalize(test5));

	return 0;
}
*/