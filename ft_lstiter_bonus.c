/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiteri_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:21:25 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/25 15:21:27 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// #include <string.h>
// void	f_(void *content)
// {
// 	char *s;
// 	s = content;

// 	*s += 1;
// }
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	t_list	*head;

// 	head = ft_lstnew(strdup("2"));
// 	ft_lstadd_front(&head, ft_lstnew(strdup("1")));
// 	ft_lstadd_back(&head, ft_lstnew(strdup("3")));
// 	ft_lstiter(head, f_);
// 	while(head)
// 	{
// 		printf("Content : %s\n", head->content);
// 		head = head->next;
// 	}
// }