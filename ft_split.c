/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:19:04 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/16 13:19:05 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int my_strlen(const char *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        while (s[i] != c && s[i])
        {
            j++;
            i++;
        }
    }
    return (j);
}

char    *my_strdup(const char *s1, char c)
{
    char *pointer;
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    pointer = malloc(my_strlen(s1, c) * sizeof(char) + 1);

    if(!pointer)
        return (NULL);
    
    while (s1[i])
    {
        while (s1[i] == c && s1[i])
            i++;
        while (s1[i] != c && s1[i])
        {
            pointer[j] = s1[i];
            j++;
            i++;
        }
        break;
    }
    pointer[j] = '\0';
    return (pointer);
}

static  int stringcount(const char *s, char c)
{
    int i;
    int j;

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

char    **ft_split(char const *s, char c)
{
    int i;
    int j;
    char **str;
    str = malloc(stringcount(s, c) * sizeof(char) + 1);
    j = 0;
    i = 0;
    if (!str)
        return (NULL);

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
int		main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split(",bonjour,je,m'appel,,Arthur,", ',');
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}