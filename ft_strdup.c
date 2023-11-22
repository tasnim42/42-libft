/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:42:58 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/11 17:05:10 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// int main()
// {
// 	const char *str1 = "Hello World";
// 	char *str2;

// 	str2 = ft_strdup(str1);
// 	if (str2 == NULL)
// 	{
// 		printf("Erreur d'allocation de mémoire.\n");
// 		return 1;
// 	}
// 	printf("Copy is : %s\n", str2);
// 	free(str2);
// }