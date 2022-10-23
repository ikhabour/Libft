/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:52:49 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/07 16:52:50 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	result;

	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dst))
		result = ft_strlen(src) + dstsize;
	else
		result = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	j = ft_strlen(dst);
	if (dstsize != 0)
	{
		while (src[i] && j < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (result);
}
