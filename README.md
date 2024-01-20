# Ft_printf

![Project](https://img.shields.io/badge/Project-Ft_printf-blue)
![Licence](https://img.shields.io/badge/Licence-MIT-orange)
[![Idioma](https://img.shields.io/badge/Idioma-Español-purple)](https://github.com/MiMendiola/Ft_printf/tree/main/Documentation/README.es.md)
![Version](https://img.shields.io/badge/Version-1.0-green)

The goal of this project is to reprogram one of the most practical function `printf`, and discover the use of `variadic functions` in C.
We have the freedom to create as many files as we want, and we have to keep this in mind in our `.h` and `Makefile`.

First, let's talk about our main file, `ft_printf`, where we will have our function stipulated in our subject, using our `variadic functions` and `looking for a %` to identify the `variable type` requested. The other function is a `type selector`, where we will also use one of our variadic functions and work with the `next character after the %` previously found. From that point, we will select the `type` of function to use `depending on the letter found`.

- In our `ft_printf_basics`, we will have functions that will solve the most `basic` tasks, such as printing a single character, a string, or displaying numbers with and without a sign. Here, we can use functions previously used in the `Libft` and modify them, taking into account the `character counter` returned, which will be returned in each function.
- In `ft_printf_others`, I have placed the functions we will need to display our `hexadecimal numbers` and another related to `pointer addresses`, always considering our `counter`.

---

## Tabla de Contenidos

[FT_PRINTF.C](./ft_printf.c)

[FT_PRINTF_BASICS.C](./ft_printf_basics.c)

[FT_PRINTF_OTHERS.C](./ft_printf_others.c)

[FT_PRINTF.H](./ft_printf.h)

---

## Recomendaciones

Investigate how to work with `variadic functions` and what possibilities of use we have with them.

Have a clear idea of what `type of conversions` we need to perform and how to make those conversions. For this, you can seek help from some functions in the library, but remember that you cannot include `Libft`.

Find out and understand how `hexadecimal numbers` work, how they became what they are, and how we can use them to our advantage. Similarly, with `pointer addresses`, understand how they are formed and how to use them.

Keep in mind that we have to return the total sum of what is printed on the screen, so it would be good to have a `counter` that helps us.

---

## Contact

If you have any questions, suggestions, or comments about ft_printf, feel free to contact me:

- Email: <a href="mailto:mglmendiol@gmail.com" style="text-decoration: none; color:#fff">mglmendiol@gmail.com</a>
- LinkedIn: <a href="https://www.linkedin.com/in/mimendiola/" style="text-decoration: none; color:#fff !important;">https://www.linkedin.com/in/mimendiola/</a>
