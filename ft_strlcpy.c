/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:55:37 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/28 15:31:20 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size_dest)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (dest == 0 || src == 0)
	{
		return (0);
	}
	if (size_dest != 0)
	{
		while (src[i] != '\0' && i < (size_dest - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}

// int main()
// {
// 	const char src[] = "Tasnim";
// 	char dest[10];

// 	printf("%zu\n", ft_strlcpy(dest, src, 4));
// }

// int	main()
// {
// 	char	dest[10] = "Hamsa";
// 	char	src[10] = "Taha";
// 	size_t size_dest = 2;

// 	// printf("%zu\n", ft_strlcpy(dest, src, size_dest));
// 	printf("%zu\n", strlcpy(dest, src, size_dest));
// }