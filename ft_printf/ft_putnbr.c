/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:34:46 by amine             #+#    #+#             */
/*   Updated: 2022/12/02 19:12:32 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i += ft_putchar('-');
		i += ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	else
	{
		i += ft_putchar(nb + 48);
	}
	return (i);
}
