/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:18:18 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:18:30 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t c;
    char *d;
    char *s;

    c = 0;
    d = (char *)dst;
    s = (char *)src;

    while(c < n)
    {
        d[c] = s[c];
        c++;
    }
return(dst);
}
