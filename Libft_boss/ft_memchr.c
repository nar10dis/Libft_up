/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:30:14 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/18 12:05:47 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// cherche c dans la memoire s jusqua n.
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*jules;
	size_t				i;

	jules = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (jules[i] == (unsigned char)c)
			return (&jules[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char s[] = "0123456789";
	int	c = '5';
	char	*tmp;

	tmp = ft_memchr(s, c, 10);
	printf("%s\n", tmp);
	return (0);
}*/
