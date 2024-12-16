/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:05:57 by nadeluge          #+#    #+#             */
/*   Updated: 2024/11/19 12:03:20 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//FREE AFTER USE 
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	if (!lst || !f || !del)
		return (NULL);
	first = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew((f(lst->content)));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}

/*void	*f(void *content)
{
	int	i;
	char	*str;

	i = 0;
	str = strdup((char *)content);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

void	del(void *content)
{
	free(content);
}
int	main()
{
	t_list	*head;
	t_list	*nodle1;
	t_list	*nodle2;
	t_list	*nodle3;
	t_list	*new;
	t_list	*current;

	nodle1 = ft_lstnew(ft_strdup("tete de liste"));
	head = nodle1;
	nodle2 = ft_lstnew(ft_strdup("corps de liste"));
	nodle3 = ft_lstnew(ft_strdup("pieds de liste"));
	ft_lstadd_back(&head, nodle2);
	ft_lstadd_back(&head, nodle3);
	current = nodle1;
	printf("Liste source :\n\n");
	while(current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("\n");
	new = ft_lstmap(nodle1, f, del);
	current = new;
	printf ("Apres modifs :\n\n");
	while(current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(&head, del);
	head = new;
	ft_lstclear(&head, del);
	return (0);
}*/
