/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendiol <mmendiol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:01:58 by mmendiol          #+#    #+#             */
/*   Updated: 2023/11/25 17:33:36 by mmendiol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// %c carácter.
// %s string (como se define por defecto en C).
// %p formato hexadecimal del puntero (direccion).
// %d decimal (base 10).
// %i base 10.
// %u decimal (base 10) sin signo.
// %x hexadecimal (base 16) en minúsculas.
// %X hexadecimal (base 16) en mayúsculas.
// %% imprimir el símbolo del porcentaje.

#include "ft_printf.h"
#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_putnbr.c"

// Is going to identify the type of variable it is
int select_type(va_list parameters, char complete_str)
{
    int count;

    count = 0;
    if (complete_str == 'c')
        count += ft_putchar(va_arg(parameters, int));
    else if (complete_str == 's')
        count += ft_putstr(va_arg(parameters, char *));
    // else if (complete_str == 'p')
    //     count += ft_putchar(va_arg(parameters, char));
    else if (complete_str == 'd')
        count += ft_putnbr(va_arg(parameters, int));
    else if (complete_str == 'i')
        count += ft_putnbr(va_arg(parameters, int));
    // else if (complete_str == 'u')
    //     count += ft_putchar(va_arg(parameters, char));
    // else if (complete_str == 'x')
    //     count += ft_putchar(va_arg(parameters, char));
    // else if (complete_str == 'X')
    //     count += ft_putchar(va_arg(parameters, char));
    else if (complete_str == '%')
        count += ft_putchar(complete_str);
    
    return (count);
}

int ft_printf(char const *total_str, ...)
{
    va_list params;
    int counter;

    counter = 0;
    va_start(params, total_str);
    while (*total_str)
    {
        if (*total_str == '%')
        {
            if (*total_str++ == '%')
                counter += select_type(params, *total_str++); 
        }
        else
            counter += ft_putchar(*total_str++);
    }

    va_end(params);
    return (counter);
}

int main(void)
{
    char a = 'a';
    char *str = "Buenas";
    int b = -3;
    int c = 3;
    int d = 15;

    ft_printf("Mio: %%\n");    
    ft_printf("Mio C: %c\n", a);    
    ft_printf("Mio S: %s\n", str);    
    // ft_printf("Mio P: %p\n");    
    ft_printf("Mio D: %d\n", b);    
    ft_printf("Mio I: %i\n", c);    
    // ft_printf("Mio U: %u\n");
    // ft_printf("Mio x: %x\n");
    // ft_printf("Mio X: %X\n");
    printf("Hello world!\n %c\n %s\n %p\n %d\n %i\n %u\n %x\n %X\n %% bue\n", a, str, str, b, c, c, d, d);

    return (0);
}