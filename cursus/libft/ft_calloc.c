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

void	*ft_calloc(size_t nitems, size_t size)
{
	void *array;

	array = (void *)malloc(size * nitems);
	if (!array)
		return (NULL);
	ft_bzero(array, size * nitems);
	return ((void *)array);
}
