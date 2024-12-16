/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:42:33 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/12 16:01:36 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	f(unsigned int i, char *c)
{
	while (c[i])
	{
		c[i] += 32;
		i++;
	}
}
int	main()
{
	char	str[] = "HELLO";
	
	ft_striteri(str, f);
	printf("%s\n", str);
	return (0);
}*/