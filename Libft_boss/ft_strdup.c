/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:30:07 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 11:57:23 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Duplique s1 dynamiquement.
//FREE AFTER USE
char	*ft_strdup(const char *s1)
{
	int			i;
	int			s1_l;
	char		*str;

	i = 0;
	s1_l = ft_strlen(s1);
	str = malloc(sizeof(char) * s1_l + 1);
	if (!str)
		return (NULL);
	while (i < s1_l)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
