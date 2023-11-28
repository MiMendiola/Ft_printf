NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra
CC = cc
AR = ar -crs
RM = rm -f

SRCS = ft_printf.c ft_printf_basics.c ft_printf_others.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re