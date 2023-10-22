/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:51:28 by ralanes           #+#    #+#             */
/*   Updated: 2023/10/22 21:44:17 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isascii( int c)
{
	if (c >= 0 && c < 128)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
    int c;
    c = ' ';
    printf("%d is ascii", ft_isascii(-1));
    printf("%d is ascii", ft_isascii(128));
}*/