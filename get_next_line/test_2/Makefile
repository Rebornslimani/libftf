CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = get_next_line.a
SOURCES = get_next_line.c get_next_line_utils.c\

OBJS = $(SOURCES:.c=.o)

HEADER = get_next_line.h

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