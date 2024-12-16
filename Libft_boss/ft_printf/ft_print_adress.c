/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:41:10 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/21 16:04:24 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_putnbr_base_us(unsigned long nb, char *base)
{
	if (nb < (unsigned long)ft_strlen(base))
		ft_putchar(base[nb]);
	if (nb >= (unsigned long)ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base(nb % ft_strlen(base), base);
	}
	return (get_count(nb, ft_strlen(base)));
}

int	ft_print_adress(va_list args)
{
	long	adress;
	int		len;

	adress = (long)va_arg(args, void *);
	if (!adress)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	len = 2;
	len += ft_putnbr_base_us(adress, "0123456789abcdef");
	return (len);
}
