/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:48:25 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 10:48:26 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t i;
	i = 0;
	unsigned char *ss1 = (unsigned char *) str1;
	unsigned char *ss2 = (unsigned char *) str2;
	while ( i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	
	return 0;
}
