/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42.ja>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:56:26 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/17 20:27:04 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_puthex(unsigned long n, int uppercase)
{
	char	char_n;
	char	*base;
	char	*upper_base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	upper_base = "0123456789ABCDEF";
	if (n >= 16)
		i += ft_puthex(n / 16, uppercase);
	if (!uppercase)
		char_n = base[n % 16];
	else
		char_n = upper_base[n % 16];
	write(1, &char_n, 1);
	return (i + 1);
}

// int	main(void)
// {
// 	ft_puthex(1, 0);
// 	write(1, "\n", 1);
// 	ft_puthex(12345, 1);
// 	write(1, "\n", 1);
// 	ft_puthex(0, 0);
// 	write(1, "\n", 1);
// 	ft_puthex(2147483647, 1);
// 	write(1, "\n", 1);
// }