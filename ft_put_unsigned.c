/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42.ja>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:43:38 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/17 20:26:47 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_put_unsigned(unsigned int n)
{
	char	char_n;
	int		i;

	i = 0;
	if (n >= 10)
		i += ft_put_unsigned(n / 10);
	char_n = n % 10 + '0';
	write(1, &char_n, 1);
	return (i + 1);
}

// int	main(void)
// {
// 	ft_put_unsigned(1);
// 	write(1, "\n", 1);
// 	ft_put_unsigned(12345);
// 	write(1, "\n", 1);
// 	ft_put_unsigned(0);
// 	write(1, "\n", 1);
// 	ft_put_unsigned(2147483647);
// }
