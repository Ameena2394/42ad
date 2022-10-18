/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:48:09 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 10:48:10 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;

	i = 0;
	unsigned char *s = (unsigned char *) str;
	unsigned char d = (unsigned char) c;

	while (i < n)
	{
		if (s[i] == d)
			return (s + i);
		i++;
	}
	return 0;
}
