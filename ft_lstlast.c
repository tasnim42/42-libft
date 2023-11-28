/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:45:48 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/27 14:26:35 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int	main()
// {
// 	t_list	*Element_1 = ft_lstnew("Hello, ");
// 	t_list	*Element_2 = ft_lstnew("good ");
// 	t_list	*Element_3 = ft_lstnew("morning !");

// 	t_list *list = Element_1;
// 	Element_1->next = Element_2;
// 	Element_2->next = Element_3;

// 	t_list	*last_element = ft_lstlast(list);

// 	printf("%s\n", last_element->content);

// 	// ft_lstclear(&list, free);
// }