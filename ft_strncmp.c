/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:33:11 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/12 16:35:37 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*int main(void)
{
	char s1[] = "ha";
	char s2[] = "hb";
	size_t n =3;
	printf("%d\n",ft_strncmp(s1,s2,n));
	printf("%d\n",strncmp(s1,s2,n));
}*/
