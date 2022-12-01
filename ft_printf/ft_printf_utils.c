/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:55:52 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/12/01 14:38:28 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_int(int a)
{
	int	result;

	result = 0;
	if (a == 0)
		return (write(1, "0", 1));
	if (a == -2147483648)
		return (write(1, "-2147483648", 11));
	if (a < 0)
	{
		result += write(1, "-", 1);
		a *= -1;
	}
	if (a >= 10)
		result += ft_int(a / 10);
	write(1, &"0123456789"[a % 10], 1);
	return (result + 1);
}
// Decimal to hexademical convert

int	ft_hex(unsigned int a, char c)
{
	int	result;

	result = 0;
	if (a >= 16)
		result += ft_hex(a / 16, c);
	if (c == 'X')
		write(1, &"0123456789ABCDEF"[a % 16], 1);
	if (c == 'x')
		write(1, &"0123456789abcdef"[a % 16], 1);
	return (result + 1);
}

int	ft_point(unsigned long a, int sign)
{
	int	result;

	result = 0;
	if (sign == 1)
	{
		result += write(1, "0x", 2);
		sign = 0;
	}
	if (a >= 16)
		result += ft_point(a / 16, 0);
	write(1, &"0123456789abcdef"[a % 16], 1);
	return (result + 1);
}

int	ft_string(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}

int	ft_unsigned(unsigned int a)
{
	int	result;

	result = 0;
	if (a >= 10)
		result += ft_unsigned(a / 10);
	write(1, &"0123456789"[a % 10], 1);
	return (result + 1);
}
