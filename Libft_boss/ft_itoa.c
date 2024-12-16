/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:35:14 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/12 15:55:06 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getlen(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	len = getlen(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr >= 10)
	{
		str[len] = (nbr % 10) + '0';
		len--;
		nbr = nbr / 10;
	}
	str[len] = (nbr % 10) + '0';
	return (str);
}

/*int	main(int argc, char **argv)
{
	printf("%s\n", ft_itoa(atoi(argv[1])));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}*/
