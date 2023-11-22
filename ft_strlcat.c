/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:12:21 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/11 17:06:03 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	size_dest;
	size_t	size_src;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if ((!dest || !src) && !n)
	{
		return (0);
	}
	if (n <= size_dest)
	{
		return (n + size_src);
	}
	while (src[i] != '\0' && (i < (n - size_dest - 1)))
	{
		dest[i + size_dest] = src[i];
		i++;
	}
	dest[i + size_dest] = '\0';
	return (size_dest + size_src);
}

// int	main()
// {
// 	char src1[] = "";
// 	char dest1[] = "Tasnim";
// 	int n = 0;
// 	size_t result1 = ft_strlcat(dest1, src1, n);
// 	printf("Concatenate string : %s\n", dest1);
// 	printf("Total lengh after concatenation : %zu\n", result1);

// 	char src2[] = "";
// 	char dest2[] = "Tasnim";
// 	size_t result2 = strlcat(dest2, src2, n);
// 	printf("Concatenate string : %s\n", dest2);
// 	printf("Total lengh after concatenation : %zu\n", result2);
// }