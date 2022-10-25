/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:26:09 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/25 15:26:09 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*alist;

	alist = NULL;
	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new = alist;
	while (lst != NULL)
	{
		new->content = f(lst->content);
		if (!new)
		{
			while (alist != NULL)
			{
				del(new->content);
				alist = alist->next;
			}
		}
		lst = lst->next;
		new = new->next;
	}
	return (new);
}
