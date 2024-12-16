/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:51:48 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 11:58:03 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Concatene s1 et s2 dynamiquement.
//FREE AFTER USE.
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;
	int		s1_l;
	int		s2_l;

	i = 0;
	j = 0;
	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1_l + s2_l) + 1);
	if (!str)
		return (NULL);
	while (i < s1_l)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < s2_l)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/*int	main(int argc, char **argv)
{
	char	*str;

	(void)argc;
	str = ft_strjoin(argv[1], argv[2]);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
