/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:52:41 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/24 18:52:42 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
#include <stdio.h>
#include <string.h>
int	main()
{
	t_list *head;

	head = ft_lstnew(strdup("test"));
	ft_lstadd_back(&head, ft_lstnew(strdup("test1")));
	ft_lstadd_back(&head, ft_lstnew(strdup("test2")));
	ft_lstadd_back(&head, ft_lstnew(strdup("test3")));
	printf("%d", ft_lstsize(head));
}