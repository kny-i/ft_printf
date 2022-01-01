NAME = libftprintf.a

SRCS = ft_printf.c ft_putaddress_len.c ft_putnbr_convert_base.c \
		ft_putnbr_len.c ft_putstr_len.c \
		ft_putchar_len.c
OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra
CC = gcc -c
RM = rm -f
AR = ar rc

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
