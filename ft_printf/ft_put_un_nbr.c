/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_un_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:15:36 by amine             #+#    #+#             */
/*   Updated: 2022/12/02 19:18:49 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_un_nbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
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
