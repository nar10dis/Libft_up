/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:17:23 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 10:30:28 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//FREE AFTER USE
//Cree une sous chaine de char a partir de s[start].
//Len = sa taille max.
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;

	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_calloc(sizeof(char), 1));
	if (len < ft_strlen(&s[start]))
		str = malloc(sizeof(char) * len + 1);
	else
		str = malloc(sizeof(char) * ft_strlen(&s[start]) + 1);
	if (!str)
		return (NULL);
	while (i < len && s[start])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(int argc, char **argv)
{
	char	*str;
	unsigned int	start = 5;
	size_t 			len = 10;

	(void)argc;
	str = ft_substr(argv[1], start, len);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
