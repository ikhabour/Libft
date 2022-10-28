/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:33:45 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/26 10:33:50 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int	main()
// {
// 	t_list	*head;

// 	head = ft_lstnew("Hello World");
// 	ft_lstadd_back(&head, ft_lstnew("End"));
// 	while (head)
// 	{
// 		printf("Content : %s\nNode Pointer : %p\n", head->content, head->next);
// 		head = head->next;
// 	}
// }