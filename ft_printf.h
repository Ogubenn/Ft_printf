/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:31:42 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/12/06 17:31:46 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_print_str(char *str);
int	ft_int(int number);
int	ft_u_int(unsigned int number);
int	ft_hex_nbr(unsigned int number, char c);
int	ft_point(unsigned long long a, int sign);
int	ft_print_data(va_list *args, const char c);

#endif