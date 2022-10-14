/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 03:56:14 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/25 07:19:31 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_hex_len(unsigned	int hex)
{
	int	i;

	i = 0;
	if (hex == 0)
		return (1);
	while (hex > 0)
	{
		hex = hex / 16;
		i++;
	}
	return (i);
}

int	ft_put_hex(unsigned int hex, char *hex_case)
{
	int		len;
	int		i;

	len = ft_hex_len(hex);
	i = len;
	while (i > 0)
	{
		ft_putchar(hex_case[hex % 16]);
		hex = hex / 16;
		i--;
	}
	return (len);
}
