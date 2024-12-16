/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:33:57 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/18 12:06:07 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//strncmp sur la memoire.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_t;
	unsigned char	*s2_t;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	s1_t = (unsigned char *) s1;
	s2_t = (unsigned char *) s2;
	while (s1_t[i] == s2_t[i] && i < n - 1)
		i++;
	return (s1_t[i] - s2_t[i]);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d\n", memcmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/