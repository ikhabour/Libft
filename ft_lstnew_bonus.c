/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:03:33 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/24 17:03:33 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first;

	first = malloc(sizeof(t_list));
	if (!first)
		return (0);
	first->content = content;
	first->next = NULL;
	return (first);
}
// #include <stdio.h>
// int	main()
// {
// 	t_list	*head;

// 	head = NULL;
// 	head = ft_lstnew("Hello World");
// 	printf("%s", (head)->content);
// }