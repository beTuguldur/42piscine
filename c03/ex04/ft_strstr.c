/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 05:08:03 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/31 16:37:25 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "lorem ipsum";
	char	find[] = "lor";

	char *result = ft_strstr(str, find);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found.\n");
}
*/