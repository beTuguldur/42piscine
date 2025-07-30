/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:24:21 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/28 14:28:58 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
    printf("%d\n", ft_str_is_uppercase("Hello"));
    printf("%d\n", ft_str_is_uppercase("HELLO"));
    printf("%d\n", ft_str_is_uppercase(""));
    printf("%d\n", ft_str_is_uppercase("HELLO321"));
}
*/