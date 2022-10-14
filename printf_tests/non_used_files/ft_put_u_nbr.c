/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 06:16:00 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/23 06:17:15 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u_nbr_2(unsigned int n)
{
	char	*str;
	int		counter;

	str = ft_u_itoa(n);
	counter = ft_putstr(str);
	free(str);
	return (counter);
}
