/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:15:15 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/29 13:32:05 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
    char t1[] = "hehehehe";
    char t2[] = "HEHEHEHE";
    char t3[] = "";
    char t4[] = "123456";

    printf("%s\n", ft_strlowcase(t1));
    printf("%s\n", ft_strlowcase(t2));
    printf("%s\n", ft_strlowcase(t3));
    printf("%s\n", ft_strlowcase(t4));
}
*/
