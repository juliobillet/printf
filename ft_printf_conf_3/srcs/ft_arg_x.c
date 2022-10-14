/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 03:56:14 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/28 01:54:12 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned int hex, char *hex_case)
{
	char			*str;
	int				counter;

	str = ft_u_int_itoa(hex, hex_case);
	counter = ft_putstr(str);
	free(str);
	return (counter);
}
