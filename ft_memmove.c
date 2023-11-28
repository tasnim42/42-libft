/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:08:42 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/28 16:15:29 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (src == NULL && dest == NULL)
		return (NULL);
	if (src <= dest)
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	else
		ft_memcpy(dest, src, len);
	return ((void *)dest);
}

// int main()
// {
// 	char src[] = "Hello";
// 	char dest[] = "World";

// 	printf("Source : %s\n", src);
// 	printf("Destination before copy : %s\n", dest);
// 	ft_memmove(dest, src, 3);
// 	printf("Destination after copy : %s\n", dest);

// 	printf("%s\n", memmove(dest, src, 3));
// }