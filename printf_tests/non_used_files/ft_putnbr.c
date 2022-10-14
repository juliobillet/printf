/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 06:12:23 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/23 06:14:58 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_2(int n)
{
	char	*str;
	int		counter;

	str = ft_itoa(n);
	counter = ft_putstr(str);
	free(str);
	return (counter);
}
