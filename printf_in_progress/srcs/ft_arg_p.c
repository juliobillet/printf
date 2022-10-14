/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 03:56:02 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/25 11:44:40 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	char			*str;
	int				counter;
	unsigned long	hex;

	hex = (unsigned long)ptr;
	str = ft_u_long_itoa(hex);
	counter = ft_putstr(str);
	free(str);
	return (counter);
}

// static	int	ft_hex_len(unsigned	long hex)
// {
// 	int	i;

// 	i = 0;
// 	if (hex == 0)
// 		return (1);
// 	while (hex > 0)
// 	{
// 		hex = hex / 16;
// 		i++;
// 	}
// 	return (i);
// }

// int	ft_putptr(void *ptr, char *hex_case)
// {
// 	int				len;
// 	int				i;
// 	unsigned long	hex;

// 	hex = (unsigned long)ptr;
// 	len = ft_hex_len(hex);
// 	i = len;
// 	while (i > 0)
// 	{
// 		ft_putchar(hex_case[hex % 16]);
// 		hex = hex / 16;
// 		i--;
// 	}
// 	return (len);
// }
