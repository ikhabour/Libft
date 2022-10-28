/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:27 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/24 18:57:27 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
#include <stdio.h>
// #include <string.h>
// int main()
// {
// 	t_list	*head;
	
// 	head = ft_lstnew(strdup("middle"));
// 	ft_lstadd_front(&head, ft_lstnew(strdup("start")));
// 	ft_lstadd_back(&head, ft_lstnew(strdup("end")));
// 	head = ft_lstlast(head);
// 	printf("Content : %s\n", head->content);
// }