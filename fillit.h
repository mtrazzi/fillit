/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 15:28:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/04 15:17:48 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"

int		diff_tetri(char *s, char *t, size_t n, char c);
int		is_str_square(char *str);
int		is_input_well_formated(char *str);
char	*read(char *av1);

#define FILLIT_H

#endif
