/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:22:48 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 12:01:42 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Cherche to_find dans str jusqua n bytes.
//return la premiere occurence de to_find ou NULL.
char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] && (i + j) < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	//cd printf("%s\n", strnstr(av[1], av[2], atoi(av[3])));
	return (0);
}*/
