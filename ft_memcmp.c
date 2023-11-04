/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:31:44 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/03 21:50:12 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
		{
			return ((int)(*str1 - *str2));
		}
		str1++;
		str2++;
		i++;
	}
	return (0);
}
/*int main (void)
{
	char s1[] = "z";
	char s2[] = "a";
	size_t n = 4;
	printf("%d\n",ft_memcmp(s1,s2,n));
	printf("%d\n",memcmp(s1,s2,n));
}*/