/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:58:39 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/28 14:29:17 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char t1[] = "hehehehe";
    char t2[] = "HEHEHEHE";
    char t3[] = "";
    char t4[] = "123456";

    printf("%s\n", ft_strupcase(t1));
    printf("%s\n", ft_strupcase(t2));
    printf("%s\n", ft_strupcase(t3));
    printf("%s\n", ft_strupcase(t4));
}
*/
