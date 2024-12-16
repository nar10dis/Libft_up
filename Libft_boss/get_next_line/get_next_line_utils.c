/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:46:57 by nadeluge          #+#    #+#             */
/*   Updated: 2024/12/04 11:25:35 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

//FREE AFTER USE
char	*ft_strdup(char *s)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	if (s[i] == (char)c)
		return (i);
	return (-1);
}

//FREE AFTER USE
char	*ft_strjoin(char *s1, char *s2)
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
	str = malloc(sizeof(char) * (s1_l + s2_l + 1));
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

char	*ft_substr(char *s, int start, int len)
{
	int		i;
	char	*str;

	i = 0;
	if (len < ft_strlen(&s[start]))
		str = malloc(sizeof(char) * (len + 1));
	else
		str = malloc(sizeof(char) * (ft_strlen(&s[start]) + 1));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	while (i < len && s[start])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
