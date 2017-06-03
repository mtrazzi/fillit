NAME = fillit

SRC_NAME = main.c

OBJ_NAME = $(SRC_NAME:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

libft: 
	$(MAKE) -C libft

all: libft
	gcc  -I$(NAME).h -lft -L.
	gcc -o $(NAME) -lft -Llibft 

clean:
	/bin/rm $(OBJ_NAME)

fclean: clean
	/bin/rm $(NAME)

re: fclean all
