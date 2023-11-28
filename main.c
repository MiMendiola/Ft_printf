#include "ft_printf.h"

int	main(void)
{
	char a = 'a';
	char *str = "Buenas";
	int b = -3;
	int c = 3;
	int d = 10;

	ft_printf("Mio: %%\n");
	ft_printf("Mio C: %c\n", a);
	ft_printf("Mio S: %s\n", str);
	ft_printf("Mio P: %p\n", str);
	ft_printf("Mio D: %d\n", b);
	ft_printf("Mio I: %i\n", c);
	ft_printf("Mio U: %u\n", b);
	ft_printf("Mio x: %x\n", d);
	ft_printf("Mio X: %X\n", d);
	printf("\nPrintf: \n %c\n %s\n %p\n %d\n %i\n %u\n %x\n %X\n %% bue\n", a,
		str, str, b, c, b, d, d);

	return (0);
}