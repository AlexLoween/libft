/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:34:01 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:34:03 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_tolower(int c) //carácter pasado como argumento
{
	if (c >= 'A' && c <= 'Z') //Si c es una letra mayúscula
		return (c + 32); //devuelve su equivalente en minúscula (ver tabla ASCII porque +32 nos situa en la posicion de la misma letra pasada pero en minuscula)
	return (c); //de lo contrario, devuelve c (carácter pasado como argumento)
}
