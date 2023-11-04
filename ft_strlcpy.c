/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:20:01 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/03 19:08:40 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (dstsize < 1)
		return (len_src);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
/*int main (void)
{ 
	char s[]= "hola que tal";
	char d[]= "llll";
	size_t t = 3;
	printf("tamaño de origen%lu \n",ft_strlcpy(d,s,t));
	printf("tamaño de origen%lu",strlcpy(d,s,t));
}*/
