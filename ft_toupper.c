/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:34:15 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:34:17 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_toupper(int c)  //carácter pasado como argumento
{
	if (c >= 'a' && c <= 'z') //Si c es una letra minúscula
		return (c - 32);  //devuelve su equivalente en mayúscula (ver tabla ASCII porque -32 nos situa en la posicion de la misma letra pasada pero en mayúscula)
	return (c); //de lo contrario, devuelve c (carácter pasado como argumento)
}
int main(void)
{
	char c;

}