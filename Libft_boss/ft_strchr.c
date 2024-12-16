/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:13:55 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 10:57:57 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Cherche la 1ere occurence de c dans str.
//Depuis le debut.
char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return (&s[i]);
	return (NULL);
}

/*int	main(int argc, char **argv)
{
	printf("%s\n", ft_strchr(argv[1], atoi(argv[2])));
	printf("%s\n", strchr(argv[1], atoi(argv[2])));
	return (0);
}*/
