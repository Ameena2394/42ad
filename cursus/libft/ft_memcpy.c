/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:44:35 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 10:44:36 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	i = 0;
	if(dst == NULL)
		return 	NULL;
	char *char_dst = (char *) dst;
	char *char_src = (char *) src;
	while ( i < n){
		char_dst[i] = char_src[i];
		i++;
	}
	char_dst[i] = '\0';
	return(dst);
}
