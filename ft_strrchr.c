/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:33:43 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/03 21:00:41 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	finded;

	finded = c;
	i = ft_strlen(s);
	if (finded == '\0')
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == finded)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*int main(void)
{
	char str[] = "Hola mundo";
	char find = '\0';
	char *result;
	result = ft_strrchr(str, find);

	if( result != NULL){
		printf("letra buscada%c posicion %ld", find, result - str);}
	else{
		printf("no se ha encontrado coincidencia %c",find );}
return(0);
}*/
