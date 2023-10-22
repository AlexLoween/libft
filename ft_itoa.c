/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:43:54 by ralanes           #+#    #+#             */
/*   Updated: 2023/10/20 20:16:36 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		(n /= 10);
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		nlen;
	char		*nstr;
	long int	nbr;

	nlen = ft_num_len(n);
	nbr = n;
	nstr = (char *)malloc(sizeof(char) * (nlen + 1));
	if (!nstr)
		return (NULL);
	nstr [nlen--] = '\0';
	if (nbr == 0)
		nstr[nlen] = '0';
	if (nbr < 0)
	{
		nstr[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nstr[nlen--] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (nstr);
}
/*int	main(void)
{
	printf("%s\n", ft_itoa(-1236));
	return (0);
}*/
