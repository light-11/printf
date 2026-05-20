/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:16:07 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/20 18:32:23 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	check(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
	{
		count += ft_putstr("0x");
		count += ft_puthex((unsigned long)va_arg(args, void *), 0);
		return (count);
	}
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_put_unsigned(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += check(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

//#include <stdio.h>

//int	main(void)
//{
//	int	a;
//	int	r1;
//	int	r2;

//	a = 5;
//	r1 = ft_printf("char=%c str=%s int=%d hex=%x HEX=%X percent=%% ptr=%p\n",
//			'A', "hello", -123, 255, 255, &a);
//	r2 = printf("char=%c str=%s int=%d hex=%x HEX=%X percent=%% ptr=%p\n", 'A',
//			"hello", -123, 255, 255, &a);
//	ft_printf("ft return: %d\n", r1);
//	printf("pf return: %d\n", r2);
//	return (0);
//}
