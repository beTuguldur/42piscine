/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:20:17 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/28 14:20:52 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
    {
   	char src[] = "Hello world";
	char dest[50] = {0};
	printf("before copy:\n");
	printf("src : %s\n", src);
	
	ft_strcpy(dest, src);
	
	printf("after copy:\n");
	printf("src : %s\n", src);
	printf("dest : %s\n", dest);

	return 0;
	}
*/
