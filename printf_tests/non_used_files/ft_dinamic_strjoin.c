/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dinamic_strjoin.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 05:38:16 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/23 05:38:27 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_dinamic_strjoin(char *dest, char *src)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!dest)
	{
		dest = (char *)malloc(1 * sizeof(char));
		dest[0] = '\0';
	}
	if (!dest || !src)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(dest) + ft_strlen(src)) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	if (dest)
		while (dest[++i] != '\0')
			str[i] = dest[i];
	while (src[j] != '\0')
		str[i++] = src[j++];
	str[ft_strlen(dest) + ft_strlen(src)] = '\0';
	free(dest);
	return (str);
}
