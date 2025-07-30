/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:14:52 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/28 14:24:06 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_str_is_numeric("424334343"));       
	printf("%d\n", ft_str_is_numeric("4ienna forty two")); 
	printf("%d\n", ft_str_is_numeric(""));                 
	return 0;
}
*/