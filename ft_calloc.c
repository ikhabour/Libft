/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:33:00 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/30 17:59:03 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	pointer = malloc(count * size);
	if (!pointer)
		return (0);
	ft_bzero(pointer, count * size);
	return (pointer);
}
