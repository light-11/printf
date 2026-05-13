/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:16:02 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/13 22:55:48 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	long	long_n;
	char	char_n;

	long_n = (long)n;
	if (long_n < 0)
	{
		write(1, "-", 1);
		long_n = long_n * -1;
	}
	if (long_n >= 10)
		ft_putnbr((int)(long_n / 10));
	char_n = long_n % 10 + '0';
	write(1, &char_n, 1);
}

int	main(void)
{
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(12345);
	write(1, "\n", 1);
	ft_putnbr(-12345);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
}
