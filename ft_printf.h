/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:18:10 by mmendiol          #+#    #+#             */
/*   Updated: 2023/11/20 21:32:18 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

// MANDATORY PRINTF
int ft_printf(char const *total_str, ...);

// AUXILIAR FUNCTIONS
int	ft_putchar(char c, int fd);
int	ft_putnbr(int nb);
int	ft_putstr(char *s, int fd); 

#endif