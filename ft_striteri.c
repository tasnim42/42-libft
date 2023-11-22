/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:15:18 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/17 10:32:43 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while ((s != NULL) && (s[i] != '\0'))
	{
		if (f != NULL)
			f(i, &s[i]);
		i++;
	}
}

void	f(unsigned int i, char *c)
{
	(void)i;
	*c = (char)ft_toupper((int)(*c));
}

// int main()
// {
// 	char	str1[] = "Loujayne";
// 	printf("The original string is : %s\n", str1);
// 	ft_striteri(str1, &f);
// 	printf("The string after modification of (f) is : %s\n", str1);
// }