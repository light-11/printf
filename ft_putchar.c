/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:21:10 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/12 19:43:31 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (c);
}
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_putchar('a'));
}
