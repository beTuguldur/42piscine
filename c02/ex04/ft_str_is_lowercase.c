/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:15:33 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/28 14:28:17 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
	printf("%d\n", ft_str_is_lowercase("424334343"));       
	printf("%d\n", ft_str_is_lowercase("4ienna forty two")); 
	printf("%d\n", ft_str_is_lowercase(""));
    printf("%d\n", ft_str_is_lowercase("hello"));                 
             
	return 0;
}
*/
