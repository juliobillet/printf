/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 03:56:02 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/31 04:56:13 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	char			*str;
	int				counter;
	unsigned long	hex;

	hex = (unsigned long)ptr;
	if (hex == 0)
		return (ft_putstr("(nil)"));
	str = ft_u_long_itoa(hex);
	counter = ft_putstr("0x");
	counter += ft_putstr(str);
	free(str);
	return (counter);
}
