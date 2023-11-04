/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:31:19 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/03 21:30:41 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == to_find)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	char str[] = "Hola mundx";
	char find = 'x';
	size_t n = 9;
	char *result;
	result = ft_memchr(str, find, n);

	if( result != NULL){
		printf("letra buscada%c posicion %ld", find, result - str);}
	else{
		printf("no se ha encontrado coincidencia %c",find );}
return(0);
}*/
