/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:01:32 by alexlowen         #+#    #+#             */
/*   Updated: 2023/10/22 21:12:59 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *save;

    if(!lst)
        return ;
    while(*lst != 0)
    {
        save = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = save;
    }
}
/*void imprimirlista(t_list *lista)
{
    while(lista != 0)
    {
        printf("%s\n", lista->content);
    lista= lista->next;
    }
    printf("NULL\n");
}
void (*del)(void *);
int main (void)
{
    t_list *milista;
    t_list *nodo1;
    t_list *nodo2;

    milista = 0;
    nodo1 = ft_lstnew("cat");
    nodo2 = ft_lstnew("dog");
    ft_lstadd_front(&milista, nodo1);
    ft_lstadd_front(&milista, nodo2);
    imprimirlista(milista);
    ft_lstclear(&milista, del);
    imprimirlista(milista);
}*/