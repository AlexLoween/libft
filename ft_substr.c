/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:53:22 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/06 20:54:24 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;
	size_t	j;
	size_t	str_len;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
		start = str_len;
	if (len > str_len - start)
		len = str_len - start;
	subs = malloc(sizeof(char) * (len + 1));
	if (subs == NULL)
		return (NULL);
	j = start;
	i = 0;
	while (i < len && (ft_strlen(s)) > start)
	{
		subs[i] = s[j];
		i++;
		j++;
	}
	subs[i] = '\0';
	return (subs);
}
/*int	main(void)
{
	char	*str;

	str = ft_substr("Hola", 2, 3);
	printf("%s\n", str);
	return (0);
}*/