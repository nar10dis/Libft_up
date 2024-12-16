/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:52:03 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 11:59:46 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_l;
	size_t	src_l;

	i = 0;
	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	if (size <= dest_l)
		return (src_l + size);
	while (src[i] && (dest_l + i) < size - 1)
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	if (dest_l + i < size)
		dest[dest_l + i] = '\0';
	return (src_l + dest_l);
}

/*
int	main(int argc, char **argv)
{
	int	x;

	if (argc != 4)
		return (0);
	x = (int)atoi(argv[3]);
	printf("%d\n", ft_strlcat(argv[1], argv[2], x));
	//printf("%d\n", strlcat(argv[1], argv[2], x));
	return (0);
}*/
