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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	i = 0;
	if(dest == NULL)
		return 	NULL;
	char *char_dest = (char *) dest;
	char *char_src = (char *) src;
	while ( i < n){
		char_dest[i] = char_src[i];
		i++;
	}
	char_dest[i] = '\0';
	return(dest);
}
