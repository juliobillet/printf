/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 01:08:56 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/25 07:19:25 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg_list;
	int		i;
	int		char_count;

	i = 0;
	char_count = 0;
	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			char_count += ft_print_arg(format, i, arg_list);
			i++;
		}
		else
			char_count += ft_putchar(format[i]);
		i++;
	}
	va_end(arg_list);
	return (char_count);
}
