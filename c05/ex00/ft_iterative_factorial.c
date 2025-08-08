/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:19:37 by berkhemb          #+#    #+#             */
/*   Updated: 2025/08/04 16:30:12 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb = nb - 1;
	}
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
    printf("Factorial of 5: %d\n", ft_iterative_factorial(5)); // 120
    printf("Factorial of 0: %d\n", ft_iterative_factorial(0)); // 1
    printf("Factorial of -3: %d\n", ft_iterative_factorial(-3)); // 0
    return 0;
}
*/