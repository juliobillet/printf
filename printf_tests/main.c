/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 03:20:39 by jbillet           #+#    #+#             */
/*   Updated: 2022/07/28 03:45:13 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int				a;
	unsigned int	b;
	char			c;
	char			*str;
	int				d;
	int				f;
	void			*ptr;

	a = -2147483648;
	b = 4294967295;
	c = 'j';
	d = 0;
	f = 0;
	ptr = 0;
	str = "str teste";
	printf("====== ORIGINAL PRINTF ======\n");
	d += printf("d flag: %d\ni flag: %i\nc flag: %c\ns flag: %s\n", a, a, c, str);
	d += printf("u flag: %u\nx flag: %x\nX flag: %X\np flag: %p\n", b, b, b, str);
	d += printf("%% flag: %%\n");
	printf("=============================\n");
	ft_printf("========= MY PRINTF =========\n");
	f += ft_printf("d flag: %d\ni flag: %i\nc flag: %c\ns flag: %s\n", a, a, c, str);
	f += ft_printf("u flag: %u\nx flag: %x\nX flag: %X\np flag: %p\n", b, b, b, str);
	f += ft_printf("%% flag: %%\n");
	ft_printf("=============================\n");
	ft_printf("============== Printf functions return values check ==============\n");
	ft_printf("Original printf: %d\nMy Printf: %d\n", printf("%s\n", str), ft_printf("%s\n", str));
	ft_printf("Original printf d: %d\nMy Printf f: %d\n", d, f);
	ft_printf("============================================================\n");
	ft_printf("=============== Other tests ===============\n");
	// d = printf("P being 0 - original printf: %p \n", 0);
	f = ft_printf("P being 0 - my printf: %p \n", 0);
	// ft_printf("Original printf d: %d\nMy Printf f: %d\n", d, f);
	ft_printf("===========================================\n");
	
	return (0);
}
