/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:33:24 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/04 13:15:54 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)stack);
	while (stack[i])
	{
		n = 0;
		while (stack[i + n] == needle[n] && (i + n) < len)
		{
			if (stack[i + n] == '\0' && needle[n] == '\0')
				return ((char *)stack + i);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)stack + i);
		i++;
	}
	return (0);
}
/*int main (void)
{
	char s1[]= 
	char s2[]=
}*/