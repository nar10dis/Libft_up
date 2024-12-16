/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:24:14 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 12:03:09 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//FREE AFTER USE
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

/*int	main()
{
	ft_lstnew(0);
	return (0);
}*/