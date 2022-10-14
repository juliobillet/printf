/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 03:12:34 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/25 11:42:02 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(const char *format, int index, va_list arg_list)
{
	if (format[index + 1] == '%')
		return (ft_putchar(format[index + 1]));
	else if (format[index + 1] == 'c')
		return (ft_putchar(va_arg(arg_list, int)));
	else if (format[index + 1] == 's')
		return (ft_putstr(va_arg(arg_list, char *)));
	else if (format[index + 1] == 'd' || format[index + 1] == 'i')
		return (ft_putnbr(va_arg(arg_list, int)));
	else if (format[index + 1] == 'u')
		return (ft_put_u_nbr(va_arg(arg_list, unsigned int)));
	else if (format[index + 1] == 'x' || format[index + 1] == 'X')
	{
		if (format[index + 1] == 'x')
			return (ft_put_hex(va_arg(arg_list, unsigned int), LOW_HEX));
		else
			return (ft_put_hex(va_arg(arg_list, unsigned int), UP_HEX));
	}
	else if (format[index + 1] == 'p')
		return (ft_putstr("0x") + ft_putptr(va_arg(arg_list, void *)));
	else
		return (0);
}
