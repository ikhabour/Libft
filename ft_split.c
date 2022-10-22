/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:05:11 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/18 15:05:11 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		j++;
	}
	return (j);
}

static	char	*my_strdup(const char *s, char c)
{
	char	*pointer;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	pointer = malloc(ft_len(s, c) * sizeof(char) + 1);
	if (!pointer)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		pointer[j] = s[i];
		i++;
		j++;
	}
	pointer[j] = '\0';
	return (pointer);
}

static	int	stringcount(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			j++;
		while (s[i] != c && s[i])
			i++;
	}
	return (j);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**str;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	str = (char **)malloc((stringcount(s, c) + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			str[j] = my_strdup(s + i, c);
			j++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	str[j] = 0;
	return (str);
}

// int		main(void)
// {
// 	int i = 0;
// 	char **tab;

// 	tab = ft_split(",bonjour,je,m'appel,,Arthur,", ',');
// 	while (i < 4)
// 	{
// 		printf("string %d : %s\n", i, tab[i]);
// 		i++;
// 	}
// 	return (0);
// }