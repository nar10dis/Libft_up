/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:58:48 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/18 11:46:32 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Nettoie lespace de memoire s avec n '\0'.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char	s[10] = "0123456789";
	char	*tmp;
	int	i;
	
	i = 0;
	ft_bzero(s, 10);
	tmp = (char *) s;
	printf("%s\n", tmp);
	return (0);
}*/
