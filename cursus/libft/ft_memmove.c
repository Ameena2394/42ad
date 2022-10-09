/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:45:16 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 10:45:17 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
