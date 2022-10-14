/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_long_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:33:50 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/25 11:40:11 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	ft_int_size(unsigned long n)
{
	if ((n / 16) == 0)
		return (1);
	else
		return (1 + ft_int_size(n / 16));
}

static	char	*ft_reverse_str(char *str)
{
	size_t	i;
	size_t	len;
	char	temp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len - i)
	{
		temp = str[i];
		str[i] = str[len - i];
		str[len - i] = temp;
		i++;
	}
	return (str);
}

static	char	*ft_convert(unsigned long n, char *str, size_t len, char *base)
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

char	*ft_u_long_itoa(unsigned long n)
{
	size_t	len;
	char	*str;

	len = ft_int_size(n);
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	ft_convert(n, str, len, LOW_HEX);
	return (ft_reverse_str(str));
}
