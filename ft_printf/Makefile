CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SOURCES = ft_cstrprct.c ft_printf.c ft_parsing.c utile.c main.c 

OBJS = $(SOURCES:.c=.o)

HEADER = ft_printf.h


all: $(NAME)
	
$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re