/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:57:02 by amine             #+#    #+#             */
/*   Updated: 2022/12/07 17:06:44 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_checking(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += ft_putchar(va_arg(args, int));
	else if (c == 's')
		counter += ft_putstr((char *)va_arg(args, const char *));
	else if (c == 'd' || c == 'i')
		counter += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		counter += ft_put_un_nbr(va_arg(args, unsigned int));
	else if (c == '%')
		counter += ft_putchar ('%');
	else if (c == 'x')
		counter += ft_hexa(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		counter += ft_hexa(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		counter += ft_putstr("0x");
		counter += ft_hexa_adr(va_arg(args, unsigned long), "0123456789abcdef");
	}
	return (counter);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			count += ft_checking(*s, args);
		}
		else
			count += ft_putchar(*s);
		(*s && s++);
	}
	va_end(args);
	return (count);
}
