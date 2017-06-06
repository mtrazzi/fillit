#ifndef FILLIT_H

#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"

int		diff_tetri(char *s, char *t, size_t n, char c);
int		is_str_square(char *str);
int		is_input_well_formated(char *str);
int		ft_corr_input(char *input);
char	*tetris_type(char *pointer, char c);
char	*ft_read(char *av1);

#define FILLIT_H

#endif
