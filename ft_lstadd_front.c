/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:42:21 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/16 15:27:30 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!(*lst))
        *lst = new;
    else
    {
        new->next = *lst;
        *lst = new;
    }
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;

    if (!(*lst))
        *lst = new;
    else
    {
        ptr = *lst;
        while (ptr->next)
            ptr = ptr->next;
        ptr->next = new;
    }
}

int main()
{
    t_list *lst;
    t_list *n1;
    t_list *n2;
    t_list *n3;

    int array[3] = {1, 2, 3};


    lst = NULL;
    // Criacao de ponteiros
    n1 = malloc(sizeof(t_list *));
    n1->content = "ABC";
    n1->next = NULL;

    n2 = malloc(sizeof(t_list *));
    n2->content = "DEF";
    n2->next = NULL;

    n3 = malloc(sizeof(t_list *));
    n3->content = "FGH";
    n3->next = NULL;
    
    // Adicionar atras.
    ft_lstadd_front(&lst, n1);
    ft_lstadd_front(&lst, n2);
    ft_lstadd_front(&lst, n3);
    
    // Percorrer list.
    t_list *ptr;
    ptr = lst;
    while (ptr)
    {
        printf("%s\n", (char *)ptr->content);
        ptr = ptr->next;
    }



}
