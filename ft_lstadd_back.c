/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:24:15 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/28 18:27:43 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int	main()
// {
// 	t_list	*new = ft_lstnew("Tasnim :)");
// 	t_list	*element1 = ft_lstnew("Je ");
// 	t_list	*element2 = ft_lstnew("m'appelle ");

// 	t_list	*list = element1;
// 	element1->next = element2;

// 	ft_lstadd_back(&list, new);

// 	while (list)
// 	{
// 		printf("%s", (char *)list->content);
// 		list = list->next;
// 	}
// }