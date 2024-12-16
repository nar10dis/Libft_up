/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:16:55 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 12:04:31 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Cherche la 1ere occurence de c dans str.
//Depuis la fin.
char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	occ;

	i = 0;
	occ = -1;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			occ = i;
		i++;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	if (occ < 0)
		return (NULL);
	else
		return ((char *)&str[occ]);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_srrchr(argv[1], atoi(argv[1][2])));
	return (0);
}*/
