/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:14:57 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/17 10:57:04 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	f(unsigned int i, char c)
{
	(void)i;
	return ((char)ft_tolower(c));
}

// int main()
// {
// 	char	str1[] = "LaYaNe";
// 	char	*str2;

// 	str2 = ft_strmapi(str1, *f);
// 	printf("Original string is : %s\n", str1);
// 	printf("String after modification from (f) is : %s\n", str2);
// }