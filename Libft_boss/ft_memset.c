/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:33:52 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 10:55:28 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//rempli s de n * c bytes.
void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*u_s;
	size_t			i;

	i = 0;
	u_s = (unsigned char *) s;
	while (i < len)
	{
		u_s[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

/*int	main()
{
	char s[125] = "qwepoiwpoil;sdfdsjflkds";

	ft_memset(s, '5', 5);
	printf("%s\n", s);
	return (0);
}*/
