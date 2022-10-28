/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:20 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/25 14:53:21 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	del(void	*content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
// #include <stdio.h>
// int	main()
// {
// 	t_list	*head;
// 	t_list	*temp;

// 	head = ft_lstnew(strdup("Hello World"));
// 	ft_lstadd_back(&head, ft_lstnew(strdup("End")));
// 	ft_lstadd_front(&head, ft_lstnew(strdup("Start")));
// 	temp = head->next->next;
// 	ft_lstdelone(head->next, del);
// 	head->next = temp;
// 	while(head)
// 	{
// 		printf("Content : %s\n", head->content);
// 		head = head->next;
// 	}
// 	//printf("Content : %s\n", head->content);
// }