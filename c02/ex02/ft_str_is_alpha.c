/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:19:30 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/29 14:14:14 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_str_is_alpha("vienna 42"));
	printf("%d\n", ft_str_is_alpha("vienna forty two"));
	printf("%d\n", ft_str_is_alpha("vienna_forty_two"));
	printf("%d\n", ft_str_is_alpha("vienna"));
	printf("%d\n", ft_str_is_alpha("ViEnNA"));
	return 0;
}
*/