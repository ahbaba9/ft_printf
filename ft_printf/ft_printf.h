/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:57:18 by amine             #+#    #+#             */
/*   Updated: 2022/12/02 20:04:14 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(long nb);
int	ft_put_un_nbr(unsigned int nb);
int	ft_hexa(unsigned int nb, char *base);
int	ft_hexa_adr(unsigned long nb, char *base);

#endif
