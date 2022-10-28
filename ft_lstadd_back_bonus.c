/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:29:22 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/25 13:29:24 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*newlst;

	newlst = *lst;
	if (*lst)
	{
		newlst = ft_lstlast(newlst);
		newlst->next = new;
	}
	else
		*lst = new;
}
// #include <stdio.h>
// int	main()
// {
// 	t_list	*head;

// 	head = ft_lstnew("Hello World");
// 	ft_lstadd_front(&head, ft_lstnew("Start"));
// 	while(head)
// 	{
// 		printf("Content : %s\nNode Pointer : %p\n", head->content, head->next);
// 		head = head->next;
// 	}
// }
