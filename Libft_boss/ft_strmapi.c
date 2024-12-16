/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:10:48 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 12:01:14 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Duplique s avec les modifs de f.
//FREE AFTER USE.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				sl;
	unsigned int	i;
	char			*str;

	i = 0;
	sl = ft_strlen(s);
	str = malloc(sizeof(char) * sl + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char	f(unsigned int i, char c)
{
	(void)i;
	c += 32;
	return (c);
}
int	main(int argc, char **argv)
{
		(void)argc;
		printf("%s\n", ft_strmapi(argv[1], f));
		return (0);
}*/