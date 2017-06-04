/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 15:28:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/04 16:02:57 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"

int		diff_tetri(char *s, char *t, size_t n, char c);
int		is_str_square(char *str);
int		is_input_well_formated(char *str);
char	*ft_ret_tetris_fr_file(char *av1);
char	*tetris_type(char *pointer, char c);

#define FILLIT_H

#endif
