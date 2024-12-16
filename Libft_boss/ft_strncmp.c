/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:58:58 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/11 18:36:36 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1) && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main (int argc, char **argv)
{
	int	x;

	if (argc != 4)
		return (0);
	x = (int)atoi(argv[3]);
	printf("%d\n", ft_strncmp(argv[1], argv[2], x));
	printf("%d\n", strncmp(argv[1], argv[2], x));
	return (0);
}*/
