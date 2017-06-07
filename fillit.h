/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 21:45:59 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/07 12:36:29 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

int		diff_tetri(char *s, char *t, size_t n, char c);
int		is_str_square(char *str);
int		is_intput_well_formated(char *str);
int		ft_corr_input(char *input);
char	*tetris_type(char *pointer);
char	*ft_read(char *av1);
int		is_tetri(char *str);
int		ft_corr_input(char *input);
int		ft_line_len(char *grid);
char	*ft_insert(char *grid, char *tetri, int position, char letter);
int		ft_isroom(char *grid, char *tetri, int position);
char	*ft_empty_grid(size_t size);
char	*convert_size(char *tetri, int size);
int		ft_count(char *inp, char *grid, int count, int step);
void	ft_print(char *inp, char *grid, int step, int *found);

#endif
