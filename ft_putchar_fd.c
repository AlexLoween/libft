/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:23:13 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/11 23:33:35 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write (fd, &c, 1);
}
/*int main() 
{
	int fd = open("salidas.txt", O_RDWR | O_CREAT | 0666);
	char c = 'x';
	if (fd != -1) 
	{
        ft_putchar_fd(c, fd);
    }
    close(fd);
	printf("%d",fd);
    return 0;
}*/