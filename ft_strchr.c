/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:32:23 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/27 19:16:34 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
		{
			return ((char *)s);
		}
		s++;
	}
	if (a == '\0')
		return ((char *) s);
	return (0);
}
/*int main(void)
{
	char str[] = "Hola mundo";
	char find = 'o';
	char *result;
	result = ft_strchr(str, find);

	if( result != NULL){
		printf("letra buscada%c posicion %ld", find, result - str);}
	else{
		printf("no se ha encontrado coincidencia %c",find );}
return(0);
}*/
