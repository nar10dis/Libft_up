/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:08:16 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 12:01:38 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Alloue et retourne une copie dela chaîne ’s1’, sans les caractères spécifiés
//dans ’set’ au début et à la fin de la chaîne de caractères.
static int	check_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	get_start( char const *s1, char const *set)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (s1[i])
	{
		if (check_char(s1[i], set) == 1)
			start++;
		else
			return (start);
		i++;
	}
	return (start);
}

static int	get_end(char const *s1, char const *set)
{
	int	i;
	int	end;

	i = ft_strlen(s1) - 1;
	end = ft_strlen(s1);
	while (end > 0)
	{
		if (check_char(s1[i], set) == 1)
			end--;
		else
			return (end);
		i--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 1);
	return (str);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}*/
