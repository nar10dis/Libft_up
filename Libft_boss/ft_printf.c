/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:04:20 by nadeluge          #+#    #+#             */
/*   Updated: 2024/12/16 18:35:27 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf/ft_printf.h"

int	get_format(char c, va_list args)
{
	if (c == '%')
		return (ft_print_percent());
	if (c == 'd' || c == 'i')
		return (ft_print_int(args));
	if (c == 'u')
		return (ft_print_uns_int(args));
	if (c == 'x')
		return (ft_print_hex_uns_int(args, 1));
	if (c == 'X')
		return (ft_print_hex_uns_int(args, 2));
	if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	if (c == 'c')
		return (ft_print_char(args));
	if (c == 'p')
		return (ft_print_adress(args));
	return (0);
}

int	check_format(char c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == '%'
		|| c == 'x' || c == 'X' || c == 's' || c == 'c' || c == 'p')
		return (1);
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] != '%')
			count += ft_putchar(format[i++]);
		if (format[i] == '%')
		{
			if (check_format(format[i + 1]))
				count += get_format(format[i + 1], args);
			else if (!check_format(format[i++ + 1]))
				count += ft_print_percent();
			if (check_format(format[i + 1]))
				i += 2;
		}	
	}
	va_end(args);
	return (count);
}

// int	main(int argc, char **argv)
// {
// 	void	*ptr;
// 	char	*str;
// 	char	*null;
// 	int		i;
// 	int		hex;
// 	int		mycount;
// 	int		realcount;

// 	null = NULL;
// 	str = "Hello";
// 	ptr = &str;
// 	i = -2147483644;
// 	hex = 4578741;
// 	//mycount = ft_printf("X = %d\n", i);
// 	//realcount = printf("X = %d\n", i);
// 	//mycount = ft_printf("NULL %s NULL\n", null);
// 	//realcount = printf("NULL %s NULL\n", null);
// 	//mycount = ft_printf("  %p  %p \n", 4294967295, -4294967295);
// 	//realcount = printf("  %p  %p \n", 4294967295, -4294967295);
// 	//mycount = ft_printf("  %p  %p \n", 0, 0);
// 	//realcount = printf("  %p  %p \n", 0, 0);
// 	//mycount = ft_printf(NULL);
// 	//realcount = printf(NULL);
// 	// mycount = ft_printf(" % Kmdr ");
// 	// printf("\n");
// 	// realcount = printf(" % Kmdr ");
// 	// printf("\n");
// 	mycount = ft_printf(" test un peu long %d, % voici un
// X %X et un S %s", 87, 87, "quatrevingtsept\n");
// 	realcount = printf(" test un peu long %d, % voici un
// X %X et un S %s", 87, 87, "quatrevingtsept\n");
// 	printf("my count = %d\nreal count = %d\n", mycount, realcount);
// 	return (0);
// }