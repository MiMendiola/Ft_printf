/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:01:58 by mmendiol          #+#    #+#             */
/*   Updated: 2023/11/27 16:22:31 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

// MANDATORY PRINTF
int	select_type(va_list parameters, char complete_str);
int	ft_printf(char const *total_str, ...);

// UTILS FUNCTIONS
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int nb);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_putnbr_hexa(unsigned long nb, char *base);
int	ft_putptr(unsigned long nb);

#endif
