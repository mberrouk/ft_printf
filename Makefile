SRCS =	ft_printf.c ft_putnbr.c \
		ft_putchar.c ft_putstr.c 

NAME			= libftprintf.a

CC				= cc

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

AR				= ar rc

OBJS			= $(SRCS:.c=.o)

FLAGS			= -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	cc $(FLAGS) -c $(SRCS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all