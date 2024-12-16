/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:32:11 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/14 16:25:03 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*current;
		
	head = NULL;
	node1 = ft_lstnew("Veux tu jouer bientot");
	head = node1;
	node2 = ft_lstnew("Alane");
	ft_lstadd_front(&head, node2);
	current = head;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
}*/
