/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:34:30 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/14 17:36:22 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	t_list	*current;

	if (!list)
		return (NULL);
	current = list;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

/*int	main()
{
	t_list	**head;
	t_list	*nodle1;
	t_list	*nodle2;
	t_list	*last;

	head = &nodle1;
	nodle1 = ft_lstnew("Je suis la tete");
	nodle2->content = "Je suis les pieds";
	printf("%s\n", (char *)nodle1->content);
	ft_lstadd_back(head, nodle2);
	last = ft_lstlast(nodle1);
	printf("%s\n", (char *)last->content);
	return (0);		
}*/
