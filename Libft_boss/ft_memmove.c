/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:13:07 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 12:04:22 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//cpy n bytes dans dest.
//Gere les overlap.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	temp_dest = (unsigned char *) dest;
	temp_src = (unsigned char *) src;
	if (temp_dest > temp_src)
	{
		while (n-- > 0)
			temp_dest[n] = temp_src[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_memmove(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", memmove(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
