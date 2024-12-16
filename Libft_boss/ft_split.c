/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:47:40 by nadeluge          #+#    #+#             */
/*   Updated: 2024/12/15 16:03:07 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//FREE AFTER USE
static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	b;
	int	count;

	i = 0;
	b = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			b = 1;
		else if (s[i] != c && b == 1)
		{
			b = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static char	**free_tab(char **strs, int i)
{
	while (i >= 0)
	{
		free(strs[i]);
		i--;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	strs = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start < i)
			strs[j] = ft_substr(s, start, (i - start));
		if (start < i && !strs[j++])
			return (free_tab(strs, j));
	}
	strs[j] = NULL;
	return (strs);
}

/*int main(int argc, char **argv)
{
	char    **strs;
	int     i;

	(void)argc;
	i = 0;
	strs = ft_split(argv[1], argv[2][0]);
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}*/
