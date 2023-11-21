/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:25:14 by mmendiol          #+#    #+#             */
/*   Updated: 2023/11/20 21:34:14 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	counter(int nbr)
{
	int	cnt;

	cnt = 0;
	while (nbr)
	{
		nbr /= 10;
		cnt++;
	}
	return (cnt);
}

static void	calc(unsigned int nbr, int len)
{
	int	n;

	while (len--)
		nbr /= 10;
	n = (nbr % 10) + '0';
	write(1, &n, 1);
}

int	ft_putnbr(int nb)
{
	unsigned int	num;
	int				size;

	if (nb < 0)
	{
		num = nb * -1;
		write(1, "-", 1);
	}
	else
		num = nb;
	if (num == 0)
		write(1, "0", 1);
	size = counter(num);
	while (size--)
		calc(num, size);
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr(456);
	return (0);
}*/
