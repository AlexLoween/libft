/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:33:24 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/27 20:32:21 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *stack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[h] == '\0')
		return ((char *)stack);
	while (stack[h])
	{
		n = 0;
		while (stack[h + n] == needle[n] && (h + n) < len)
		{
			if (stack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)stack + h);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)stack + h);
		h++;
	}
	return (0);
}
