/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:04:52 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/27 10:42:34 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *new = ft_lstnew("Hello ");
// 	t_list *lst = ft_lstnew("World !\n");

// 	ft_lstadd_front(&lst, new);

// 	while (lst)
// 	{
// 		printf("%s", (char *)lst->content);
// 		lst = lst->next;
// 	}