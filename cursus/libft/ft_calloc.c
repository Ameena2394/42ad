/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:51:57 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 10:51:58 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = (char *)malloc(sizeof(*array) * count * size);
	if (!array)
		return (NULL);
	ft_memset(array, 0, size * count);
	return (array);
}
