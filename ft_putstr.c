/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:06:20 by mmendiol          #+#    #+#             */
/*   Updated: 2023/11/25 14:19:29 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		i += ft_putstr("(null)");
		return (i);
	}
	while (s[i])
		i += ft_putchar(s[i]);
	return (i);
}

// int	main(void)
// {
// 	char s[] = "";

// 	ft_putstr(s);
//     return (0);
// }