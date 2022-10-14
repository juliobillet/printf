/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_int_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:49:34 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/28 01:59:02 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	ft_num_size(unsigned int n)
{
	if ((n / 16) == 0)
		return (1);
	else
		return (1 + ft_num_size(n / 16));
}

static	char	*ft_convert(unsigned int n, char *str, size_t len, char *base)
{
	size_t	i;

	i = len;
	while (n > 0)
	{
		str[len - i] = base[n % 16];
		n = (n / 16);
		i--;
	}
	return (str);
}

char	*ft_u_int_itoa(unsigned int n, char *hex_base)
{
	size_t	len;
	char	*str;

	len = ft_num_size(n);
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	ft_convert(n, str, len, hex_base);
	return (ft_reverse_str(str));
}
