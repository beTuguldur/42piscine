/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:31:53 by berkhemb          #+#    #+#             */
/*   Updated: 2025/07/20 10:55:24 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		first;
	int		second;
	char	digits[5];

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			digits[0] = (first / 10) + '0';
			digits[1] = (first % 10) + '0';
			digits[2] = ' ';
			digits[3] = (second / 10) + '0';
			digits[4] = (second % 10) + '0';
			write(1, digits, 5);
			if (!(first == 98 && second == 99))
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}
