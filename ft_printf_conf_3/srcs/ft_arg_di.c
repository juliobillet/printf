/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 03:55:44 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/25 12:02:02 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_is_min_limit(int n)
{
	if (n == (INT_MIN))
		return (1);
	else
		return (0);
}

int	ft_putnbr(int n)
{
	int		counter;

	counter = 0;
	if (ft_is_min_limit(n))
		return (ft_putstr("-2147483648"));
	else
	{
		if (n < 0)
		{
			n *= -1;
			counter += ft_putchar('-');
		}
		if (n < 10)
			counter += ft_putchar(n + 48);
		else
		{
			counter += ft_putnbr(n / 10);
			counter += ft_putchar((n % 10) + 48);
		}
	}
	return (counter);
}
