/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:33:41 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/09 14:33:42 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    char *pdst;
    char *psrc;
    
    i = 0;
    pdst = (char *)dst;
    psrc = (char *)src;

    if (!dst && !src)
        return (NULL);

    else if(src < dst)
    {
        while (len)
        {
            len--;
            pdst[len] = psrc[len];
        }
    }
    else
    {
        while (i < len)
        {
            pdst[i] = psrc[i];
            i++;
        }
    }
    return (dst);
}
/*#include <stdio.h>

int main()
{
    char string1[] = "zaki";
    char string2[] = "th";

    ft_memmove(string1, string2, 2);
    printf("%s\n", string1);

    return 0;    
}*/