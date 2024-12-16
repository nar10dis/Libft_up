/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:41:43 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/15 11:30:49 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*void	del(void *content)
{
	free(content);	
}
int	main()
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*current;

	node1 = ft_lstnew(ft_strdup("first"));
	head = node1;
	node2 = ft_lstnew(ft_strdup("second"));
	ft_lstadd_back(&head, node2);
	node3 = ft_lstnew(ft_strdup("third"));
	ft_lstadd_back(&head, node3);
	node4 = ft_lstnew(ft_strdup("fourth"));
	ft_lstadd_back(&head, node4);
	ft_lstdelone(node3, del);
	node2->next = NULL;
	current = node1;
	while(current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
	
}*/
