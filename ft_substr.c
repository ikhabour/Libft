/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:36:37 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/15 22:36:37 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (0);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	substr = malloc((len + 1) * sizeof(char));
	i = 0;
	if (start > ft_strlen(s))
	{
		substr[i] = '\0';
		return (substr);
	}
	if (!substr)
		return (0);
	while (s[i] && i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

// int	main()
// {
// 	printf("%s", ft_substr(NULL, 1, 0));
// }