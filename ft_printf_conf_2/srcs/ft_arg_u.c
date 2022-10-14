/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 03:56:09 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/25 11:59:20 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u_nbr(unsigned int n)
{
	int		counter;

	counter = 0;
	if (n < 0)
		return (0);
	if (n < 10)
		counter += ft_putchar(n + 48);
	else
	{
		counter += ft_put_u_nbr(n / 10);
		counter += ft_putchar((n % 10) + 48);
	}
	return (counter);
}
