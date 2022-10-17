/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:10:24 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/09 11:10:26 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
/*#include <stdio.h>

int main()
{
    char string[] = "test string";

    printf("%s\n", string);
    ft_bzero(string, 1);
    printf("%s\n", string);
}*/