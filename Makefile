LIBFT_PATH = "../libft"
LIBFT = $(LIBFT_PATH)/libft.a
SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)
HEADERS = libft.h
EXEC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_PATH)
NAME = libft_test
.PHONY: all clean fclean re

all: $(LIBFT) $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
	$(EXEC) $(CFLAGS) -o $@ $(OBJECTS) $(LIBFT)

all: $(NAME)

$(OBJECTS): $(SOURCES)
	$(EXEC) $(CFLAGS) -o $@ -c $*.c

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	rm $(OBJECTS)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm $(NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all