/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:57:49 by ikhabour          #+#    #+#             */
/*   Updated: 2022/10/06 10:57:50 by ikhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit (c))
        return (1);
    return (0);
}
/*#include <stdio.h>

int main()
{
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('1'));
    printf("%d", ft_isalnum('$'));
    return (0);
}*/