/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkhemb <berkhemb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:57:58 by berkhemb          #+#    #+#             */
/*   Updated: 2025/08/03 12:07:29 by berkhemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	if (!is_valid_base(base))
		return ;
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
	write(1, &base[nb % base_len], 1);
}
/*
int	main(void)
{
	ft_putnbr_base(42, "0123456789");       // 42
	write(1, "\n", 1);
	ft_putnbr_base(-42, "01");              // -101010
	write(1, "\n", 1);
	ft_putnbr_base(255, "0123456789ABCDEF"); // FF
	write(1, "\n", 1);
	ft_putnbr_base(64, "poneyvif");          // on
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789"); // -2147483648
	write(1, "\n", 1);
	return (0);
}
*/