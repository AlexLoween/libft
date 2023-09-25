/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:33:24 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:33:26 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	h = 0;
	if (needle[h]  == '\0')  			// si mi string buscado es igual a 0
		return ((char *)haystack);  		//retorno un puntero al string de origen
	while (haystack[h]) 			//mientras la sring en que busco sea diferente de cero
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}