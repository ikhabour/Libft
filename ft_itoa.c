/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:50:49 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/20 17:50:51 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_len(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static	char	*ft_reverse(char *s)
{
	int		first;
	int		last;
	char	temp;

	first = 0;
	last = ft_strlen(s) - 1;
	while (first < last)
	{
		temp = s[first];
		s[first] = s[last];
		s[last] = temp;
		first++;
		last--;
	}
	return (s);
}

static	void	is_negative(int *n, unsigned int *nb, size_t *sign)
{
	if (*n <= 0)
	{
		*nb = -(*n);
		(*sign)++;
	}
}

char	*ft_itoa(int n)
{
	char			*s;
	size_t			sign;
	size_t			i;
	unsigned int	nb;

	i = 0;
	sign = 0;
	nb = n;
	is_negative(&n, &nb, &sign);
	sign += int_len(n);
	s = malloc(sizeof(char) * (sign + 1));
	if (!s)
		return (0);
	if (nb == 0)
		s[i++] = '0';
	while (nb)
	{
		s[i++] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		s[i++] = '-';
	s[i] = '\0';
	return (ft_reverse(s));
}

// int	main()
// {
// 	printf("%s", ft_itoa(-2147483648));
// }