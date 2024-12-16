/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:00:34 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 10:52:51 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//cpy n bytes dans memoire dest.
//Ne gere pas les overlaps.
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;
	size_t			i;

	if (!dest && !src)
		return (dest);
	mem1 = (unsigned char *) dest;
	mem2 = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		mem1[i] = mem2[i];
		i++;
	}
	return (dest);
}
