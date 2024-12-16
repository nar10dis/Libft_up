/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:38:30 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/21 16:04:20 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_print_percent(void)
{
	return (ft_putchar('%'));
}

int	ft_print_str(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	else
		return (ft_putstr(str));
}

int	ft_print_char(va_list args)
{
	return (ft_putchar(va_arg(args, int)));
}
