/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_adr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:03:03 by amine             #+#    #+#             */
/*   Updated: 2022/12/02 20:04:00 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_adr(unsigned long nb, char *base)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	if (nb > 15)
	{
		count += ft_hexa_adr(nb / 16, base);
		count += ft_hexa_adr(nb % 16, base);
	}
	else if (nb <= 15)
	{
		while (base[i] && i != nb)
			i++;
		if (i == nb)
			count += ft_putchar(base[i]);
	}
	return (count);
}
