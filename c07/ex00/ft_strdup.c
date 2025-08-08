/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:28:46 by berkhemb          #+#    #+#             */
/*   Updated: 2025/08/07 01:27:18 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *text_to_copy)
{
	int		count;
	char	*new_text;
	int		index;

	count = 0;
	while (text_to_copy[count] != '\0')
		count++;
	new_text = malloc((count + 1) * sizeof(char));
	if (new_text == NULL)
		return (NULL);
	index = 0;
	while (index < count)
	{
		new_text[index] = text_to_copy[index];
		index++;
	}
	new_text[index] = '\0';
	return (new_text);
}

/*
#include <stdio.h> 

int main(void)
{
    char *original_text = "hi!";
    char *copied_text = ft_strdup(original_text);

    printf("Original: %s\n", original_text);
    printf("Copied:   %s\n", copied_text);

    return 0;
}
*/