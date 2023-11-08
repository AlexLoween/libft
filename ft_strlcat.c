/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:32:40 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/04 17:48:59 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (!dstsize)
		return (src_len);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	else
		src_len += dst_len;
	while (src[i] != '\0' && dst_len < dstsize - 1)
	{
		dest[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dest[dst_len] = '\0';
	return (src_len);
}
/*int main (void)
{
	char d1[100]= "molon";
	char d2[100]= "molon";
	char src[100]= "molon";
	size_t destsize = 0;
	printf("%zu\n", ft_strlcat(d1,src, destsize));
	printf("%zu\n", strlcat(d2,src, destsize));
	printf("mia      %s\n",d1);
	printf("original %s",d2);
}*/
