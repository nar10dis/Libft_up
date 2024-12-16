/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:46:02 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/13 18:56:44 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*int	main(int argc, char **argv)
{
	int				x;
	unsigned int	size;

	x = (int)atoi(argv[3]);
	printf("%zu\n", ft_strlcpy(argv[1], argv[2], x));
	printf("%zu\n", strlcpy(argv[1], argv[2], x));
	return (0);
}*/
