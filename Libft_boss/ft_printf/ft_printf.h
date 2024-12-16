/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:32:53 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 15:52:27 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		get_format(char c, va_list args);
int		ft_print_percent(void);
int		ft_print_int(va_list args);
int		ft_print_uns_int(va_list args);
int		ft_print_hex_uns_int(va_list args, int mode);
int		ft_print_str(char *str);
int		ft_print_char(va_list args);
int		ft_print_adress(va_list args);
size_t	ft_strlen(const char *str);
int		ft_putnbr_base(long nb, char *base);
int		get_count(unsigned long nb, unsigned long base_l);
int		ft_putchar(char c);
int		ft_putstr(char *str);

#endif