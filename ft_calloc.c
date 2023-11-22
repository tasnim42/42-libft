/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:23:34 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/17 10:48:58 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb_elements, size_t size_element)
{
	void	*allocated_memory;
	size_t	total_size;

	total_size = nb_elements * size_element;
	allocated_memory = malloc(total_size);
	if (allocated_memory == NULL)
		return (NULL);
	ft_bzero(allocated_memory, total_size);
	return (allocated_memory);
}

// int main()
// {
// 	size_t nb = 5;
// 	size_t element_size = 6;

// 	int *array = (int *)ft_calloc(nb, element_size);
// 	printf("%d\n", *array);
// 	free(array);
// }