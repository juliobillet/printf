/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 01:08:51 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/30 03:01:02 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

# define LOW_HEX	"0123456789abcdef"
# define UP_HEX		"0123456789ABCDEF"

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_put_u_nbr(unsigned int n);
char	*ft_reverse_str(char *str);
int		ft_putptr(void *ptr);
int		ft_put_hex(unsigned int hex, char *hex_case);
char	*ft_u_long_itoa(unsigned long n);
char	*ft_u_int_itoa(unsigned int n, char *hex_base);
int		ft_printf(const char *format, ...);
int		ft_print_arg(const char *format, int index, va_list arg_list);

#endif
