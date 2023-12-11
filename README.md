# Ft_printf

![Proyecto](https://img.shields.io/badge/Ft_printf-Project-blue)
![Licencia](https://img.shields.io/badge/Licencia-MIT-orange)
![Versión](https://img.shields.io/badge/Versión-1.0-green)

El objetivo de este proyecto es reprogramar una de las funciones mas practicas `printf` y poder descubrir las `funciones variadicas` en C.
Tendremos la libertad de hacer todos los archivos que queramos y tendremos que tenerlo en cuenta en nuestro `.h` y `Makefile`.

Primero hablemos de nuestro archivo principal `ft_printf` donde tendremos nuestra funcion estipulada en nuestro subject donde estaremos utilizando nuestras `funciones variadicas` y estaremos en `busca de un %` para poder identificar el `tipo de variable` que nos estan pidiendo. La otra funcion es un `seleccionador de tipo` en la cual tambien usaremos una de nuestras funciones variadicas y trabajaremos con el `siguiente caracter al %` encontrado previamente, desde ese punto seleccionaremos que `tipo` de funcion usaremos `dependiendo de la letra encontrada`.

- En nuestro `ft_printf_basics` tendremos las funciones que nos solucionaran los mas `basicos` como poner un solo caracter, una string o poner numeros con y sin signo. Aqui podremos usar funciones usadas anteriormente en la `Libft` y los modificaremos teniendo en cuenta el `contador` de caracteres devueltos el cual sera devuelto en cada funcion.
- En `ft_printf_others` tengo situado las funciones que necesitaremos para mostrar nuestros `numeros hexadecimales` y otra relacionada para las `direcciones de punteros`, a la misma vez siempre teniendo en cuenta nuestro `contador`.

---

## Tabla de Contenidos

[FT_PRINTF.C](./ft_printf.c)

[FT_PRINTF_BASICS.C](./ft_printf_basics.c)

[FT_PRINTF_OTHERS.C](./ft_printf_others.c)

[FT_PRINTF.H](./ft_printf.h)

---

## Recomendaciones

Investigar como trabajar con las `funciones variadicas` y que posibilidades de uso tenemos con ellas.

Tener claro que tipo de `conversiones` tenemos que realizar y como poder realizar esas conversiones. Para esto te puedes ayudar en algunas de las funciones de la libreria pero recuerda que no puedes incluir la `Libft`.

Averiguar y saber como funcionan los `numeros hexadecimales`, como llegaron a ser lo que son y en que podemos usarlo a nuestro favor. Al igual que con las `direcciones de los punteros`, saber como se forma y como poder utilizarlos.

Tener en cuenta que tendremos que devolver la suma total de lo impreso por pantalla, asique seria bueno tener un `contador` que nos ayudase.

---

## Contacto

Si tienes alguna pregunta, sugerencia o comentario sobre ft_printf, no dudes en ponerte en contacto conmigo:

- Correo Electrónico: <a href="mailto:mglmendiol@gmail.com" style="text-decoration: none; color:#fff">mglmendiol@gmail.com</a>
- LinkedIn: <a href="https://www.linkedin.com/in/mimendiola/" style="text-decoration: none; color:#fff !important;">https://www.linkedin.com/in/mimendiola/</a>
