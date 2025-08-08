/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:08:55 by berkhemb          #+#    #+#             */
/*   Updated: 2025/08/03 13:49:36 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	skip_whitespace_and_signs(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;
	int	value;

	if (!is_valid_base(base))
		return (0);
	base_len = 0;
	while (base[base_len])
		base_len++;
	i = 0;
	result = 0;
	sign = skip_whitespace_and_signs(str, &i);
	value = base_index(str[i], base);
	while (value != -1)
	{
		result = result * base_len + value;
		i++;
		value = base_index(str[i], base);
	}
	return (result * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("   +101010", "01"));          // 42
	printf("%d\n", ft_atoi_base("   -2A", "0123456789ABCDEF")); // -42
	printf("%d\n", ft_atoi_base("   opp", "poneyvif"));         // 64
	printf("%d\n", ft_atoi_base("   +42", "0123456789"));       // 42
	printf("%d\n", ft_atoi_base("   +", "0123456789"));         // 0
	printf("%d\n", ft_atoi_base("   ", "0123456789"));          // 0
	return (0);
}
*/
