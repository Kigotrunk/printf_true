/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:59:35 by kortolan          #+#    #+#             */
/*   Updated: 2023/04/29 17:28:46 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int			ft_printf(const char *ptr, ...);
int			ft_putchar(char c);
int			ft_format_s(const char *string);
int			ft_format_i(int i);
void		ft_puthexa(unsigned long long nb, int m);
int			ft_format_hexa(unsigned long long nb, int m);
int			ft_format_p_test(unsigned long long ptr);
void		ft_ptr(unsigned long long i);
int			ft_len(unsigned long long i);
int			ft_count_u(char *tab);
int			ft_format_u(unsigned int i);
char		*ft_utoa(unsigned int n);
#endif
