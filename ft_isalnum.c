/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:40:31 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/26 20:09:38 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)));
}
/*int main(void)
{
    unsigned char c;
    c = 'c';
if(ft_isalnum(c))
    printf("%d is alphanumer", c);
else
    printf("%d no is alphanumer", c);
}*/
