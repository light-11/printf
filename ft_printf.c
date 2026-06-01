/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:16:07 by ayanaga           #+#    #+#             */
/*   Updated: 2026/06/01 16:43:18 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	check_p(unsigned long n)
{
	int		count;

	count = 0;
	if (!n)
	{
		count = ft_putstr("(nil)");
	}
	else
	{
		count += ft_putstr("0x");
		count += ft_puthex(n, 0);
	}
	return (count);
}

static int	check(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
		return (check_p((unsigned long)va_arg(args, void *)));
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
//	int		a;
//	char	*b;
//	int		r1;
//	int		r2;
//	int		b1;
//	int		b2;

//	a = 5;
//	b = NULL;
//	r1 = ft_printf("char=%c str=%s int=%d hex=%x HEX=%X percent=%% ptr=%p\n",
//			'A', "hello", -123, 255, 255, &a);
//	r2 = printf("char=%c str=%s int=%d hex=%x HEX=%X percent=%% ptr=%p\n", 'A',
//			"hello", -123, 255, 255, &a);
//	ft_printf("ft return: %d\n", r1);
//	printf("return: %d\n", r2);

//	b1 = ft_printf("%p\n", b);
//	b2 =printf("%p\n", b);
//	ft_printf("ft return: %d\n", b1);
//	printf("return: %d\n", b2);
//	return (0);
//}
