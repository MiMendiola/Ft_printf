/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:59:53 by mmendiol          #+#    #+#             */
/*   Updated: 2023/11/25 14:28:19 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}


// int	main(void)
// {
// 	char c = 'T';
// 	int i = 4;


// 	int a;
// 	a = ft_putchar(c);
// 	printf("dtA %d\n", a);
// 	while (i > 0)
// 	{
// 		ft_putchar(c);
// 		i--;
// 	}
// }