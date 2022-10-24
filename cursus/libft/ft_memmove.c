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
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	p_dst = dst;
	p_src = src;
	// Checks if `dst` is stored after `src`
	if (dst > src)
		// Copies the values of `src` to `dst` back to the front
		while (len--)
			p_dst[len] = p_src[len];
	// Checks if `dst` is stored before `src`
	else if (dst < src)
		// Copies the values of `src` to `dst` front to the back
		ft_memcpy(dst, src, len);
	return (dst);
}