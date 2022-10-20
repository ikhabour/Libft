/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:58:37 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/07 15:58:39 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
/*#include <stdio.h>

int main()
{
	char string[] = "test";
	char copy[] = "copy";
	printf("%s\n", string);
	printf("%s\n", copy);
	printf("%zu\n", ft_strlcpy(string, copy, 5));
	printf("%s\n", string);
	printf("%s\n", copy);   
	return (0);
}*/