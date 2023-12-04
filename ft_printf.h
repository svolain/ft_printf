/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:53:55 by vsavolai          #+#    #+#             */
/*   Updated: 2023/11/14 17:57:04 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_format(char specifier, va_list al);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_digit(long n, int base, char specifier);
int	ft_print_pointer(unsigned long n);

#endif
