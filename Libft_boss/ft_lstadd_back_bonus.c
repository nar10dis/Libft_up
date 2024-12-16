/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:37:46 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/15 15:49:40 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int	main()
{
	t_list	*head;
	t_list	*nodle1;
	t_list	*nodle2;
	t_list	*current;

	nodle1 = ft_lstnew("Premier noeud");
	head = nodle1;
	nodle2 = NULL;
	ft_lstadd_back(&head, nodle2);
	current = nodle1;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}*/
