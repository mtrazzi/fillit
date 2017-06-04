NAME = fillit

SRC_NAME = main.c

OBJ_NAME = $(SRC_NAME:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all:
	(test -f libft/libft.a) || (cd libft && $(MAKE) && ranlib libft.a)
	$(CC) $(CFLAGS) -c $(SRC_NAME)
	$(CC) $(CFLAGS) -Llibft -lft $(OBJ_NAME) -o $(NAME)	
clean_lib:
	(test -f libft/libft.a) && /bin/rm libft/libft.a
	
clean:
	/bin/rm -f $(OBJ_NAME)
	/bin/rm -f ./a.out

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

lclean: clean
	cd libft && ($(MAKE) clean)

lfclean: fclean
	cd libft && ($(MAKE) fclean)

lre:
	cd libft && ($(MAKE) fclean)
	$(MAKE) re
