/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:12:19 by ralanes           #+#    #+#             */
/*   Updated: 2023/10/30 19:12:20 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*temp;

	if (!s || !f)
		return (NULL);
	temp = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < (ft_strlen((char *)s)))
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
