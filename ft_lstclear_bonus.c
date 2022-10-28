/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:57:39 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/25 14:57:40 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	del(void	*content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	(*lst) = NULL;
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	t_list	*head;

// 	head = ft_lstnew(strdup("Hello World"));
// 	ft_lstadd_front(&head, ft_lstnew(strdup("Start")));
// 	ft_lstadd_back(&head, ft_lstnew(strdup("End")));
// 	ft_lstclear(&head, del);
// // 	while(head)
// // 	{
// // 		printf("Content : %s\n", head->content);
// // 		head = head->next;
// // 	}
// 	printf("Content : %s\n", head->content);
// }