CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SOURCES = 
OBJS = $(SOURCES:.c=.o)

HEADER = printf.h
all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJBONUS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus