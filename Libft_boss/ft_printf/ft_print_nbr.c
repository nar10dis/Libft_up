/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:15:57 by nadeluge          #+#    #+#             */
/*   Updated: 2024/12/06 15:43:52 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	get_count(unsigned long nb, unsigned long base_l)
{
	int	count;

	count = 0;
	while (nb >= base_l)
	{
		count++;
		nb /= base_l;
	}
	return (count + 1);
}

int	ft_putnbr_base(long nb, char *base)
{
	int	pos;

	pos = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		pos = 1;
	}
	if (nb < (long)ft_strlen(base))
		ft_putchar(base[nb]);
	if (nb >= (long)ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base(nb % ft_strlen(base), base);
	}
	return (get_count(nb, ft_strlen(base)) + pos);
}

int	ft_print_int(va_list args)
{
	return (ft_putnbr_base(va_arg(args, int), "0123456789"));
}

int	ft_print_uns_int(va_list args)
{
	return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
}

int	ft_print_hex_uns_int(va_list args, int mode)
{
	if (mode == 1)
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (mode == 2)
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	return (0);
}
