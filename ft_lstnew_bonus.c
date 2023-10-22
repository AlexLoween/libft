/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:56:17 by alexlowen         #+#    #+#             */
/*   Updated: 2023/10/22 16:46:49 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *tema)
{
    t_list *node;
    node = malloc(sizeof(t_list));
    if(!node)
        return(0);
    node->content=tema;
    node->next = 0;
return(node);
}
/*int main(void)
{
    t_list *i;

    i = ft_lstnew("alex");
    printf("%s", i->content);
}*/