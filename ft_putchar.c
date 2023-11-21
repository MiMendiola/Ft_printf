/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:59:53 by mmendiol          #+#    #+#             */
/*   Updated: 2023/11/20 21:32:27 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

/*
int	main(void)
{
	char c = 'T';
	int i = 4;

	while (i > 0)
	{
		ft_putchar_fd(c, 1);
		i--;
	}
}*/