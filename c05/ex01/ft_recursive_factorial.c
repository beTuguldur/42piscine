/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:34:41 by berkhemb          #+#    #+#             */
/*   Updated: 2025/08/04 14:32:31 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Factorial of 5 is %d\n", ft_recursive_factorial(5)); // 120
	printf("Factorial of 0 is %d\n", ft_recursive_factorial(0)); // 1
	printf("Factorial of -3 is %d\n", ft_recursive_factorial(-3)); // 0
	return (0);
}
*/