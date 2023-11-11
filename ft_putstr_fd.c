/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:23:46 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/11 23:59:26 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] && fd >= 0)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*int main() 
{
	int fd = open("salidas.txt", O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	char *str = "paco lo co";
	if (fd != -1) 
	{
        ft_putstr_fd(str, fd);
    }
    close(fd);
	printf("%d",fd);
    return 0;
}*/