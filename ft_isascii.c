/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:51:28 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/14 18:51:30 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
int ft_isascii( int c)
{
    if(c >= 0 || c <= 127)
        return(1);
    else
        return(0);
}
/*int main(void)
{
    int c;
    c = ' ';
    printf("%d is ascii", ft_isascii(c));
}*/