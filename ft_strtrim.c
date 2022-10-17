/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:49:00 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/15 23:49:01 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int get_first_index(const char *s1, const char *set)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i] && set[j])
    {
        if (s1[i] == set[j])
        {
            i++;
            j = 0;
        }
        else
            j++;
    }
    return (i);
}

static  int get_last_index(const char *s1, const char *set)
{
    int i;
    int j;

    i = ft_strlen(s1) - 1;
    j = 0;

    while (i > 0 && set[j])
    {
        if (s1[i] == set[j])
        {
            i--;
            j = 0;
        }
        else
            j++;
    }
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int x;
    int start;
    int end;
    int len;
    char *new;

    x = 0;
    start = get_first_index(s1, set);
    end = get_last_index(s1, set);
    if (end > start)
        len = end - start + 1;
    else
        len = 0;
    new = malloc(len * sizeof(char) + 1);

    if (new == NULL)
        return (NULL);

    while (start <= end)
    {
        new[x] = s1[start];
        x++;
        start++;
    }
    new[x] = '\0';
    return (new);
}