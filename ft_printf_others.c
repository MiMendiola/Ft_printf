/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_others.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:19:18 by mmendiol          #+#    #+#             */
/*   Updated: 2023/11/27 16:27:09 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned long nb, char *base)
{
	int	counter;

	counter = 0;
	if (nb >= 16)
	{
		counter += ft_putnbr_hexa(nb / 16, base);
		counter += ft_putchar(base[nb % 16]);
	}
	else
		counter += ft_putchar(base[nb]);
	return (counter);
}

int	ft_putptr(unsigned long nb)
{
	char	*base;
	int		counter;

	base = "0123456789abcdef";
	counter = 0;
	ft_putstr("0x");
	if (nb >= 16)
	{
		counter += ft_putnbr_hexa(nb / 16, base);
		counter += ft_putchar(base[nb % 16]);
	}
	else
		counter += ft_putchar(base[nb]);
	return (counter);
}
