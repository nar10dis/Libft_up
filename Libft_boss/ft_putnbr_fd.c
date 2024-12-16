/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:18:10 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/12 17:57:09 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(fd, "-", 1);
	}
	if (nbr < 10)
	{
		nbr += '0';
		write(fd, &nbr, 1);
		return ;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_fd(atoi(argv[1]), atoi(argv[2]));
	return (0);
}*/
