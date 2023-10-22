/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:31:20 by alexlowen         #+#    #+#             */
/*   Updated: 2023/10/22 21:13:31 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void(*f)(void *))
{
    while(lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
/*void (f)(void *)
{
    write(1,"alex\n",6);
}
void imprimirlista(t_list *lista)
{
    while(lista != 0)
    {
        printf("%s\n", lista->content);
    lista= lista->next;
    }
    printf("NULL\n");
}
int main(void)
{
    t_list *milista;
    t_list *nodo1;
    t_list *nodo2;
    
    milista = 0;
    nodo1 = ft_lstnew("cat");
    nodo2 = ft_lstnew("dog");
    ft_lstadd_front(&milista, nodo1);
    ft_lstadd_front(&milista, nodo2);
    ft_lstiter(milista, f);
}*/