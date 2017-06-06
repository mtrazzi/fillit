NAME = fillit

SRC_NAME = main.c ft_read.c tetris_type.c is_tetriminos.c insert.c basics.c fill.c

OBJ_NAME = $(SRC_NAME:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	(test -f libft/libft.a) || (cd libft && $(MAKE) && ranlib libft.a)
	$(CC) $(CFLAGS) -c $(SRC_NAME)
	$(CC) $(CFLAGS) -Llibft -lft $(OBJ_NAME) -o $(NAME)	

xclean:
	/bin/rm -f $(OBJ_NAME)
	/bin/rm -f ./a.out

xfclean: xclean
	/bin/rm -f $(NAME)

xre: xfclean all

clean: xclean
	cd libft && ($(MAKE) clean)

fclean: xfclean
	cd libft && ($(MAKE) fclean)

re: xre
