/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:33:16 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/13 17:33:17 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	if (!haystack && !len)
		return (0);
	else if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle
			&& ft_strncmp(&haystack[i], needle, len_needle) == 0
			&& len - i >= len_needle)
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int main()
{
	char search[] = "zakaria is very sexy and hot";
	char find[] = "very";
	printf("%s", ft_strnstr(search, find, 16));
}*/