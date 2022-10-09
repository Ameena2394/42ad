/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:51:48 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 10:51:49 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int size;
	int i;
	char *src1;

	size = ft_strlen(src);
	i = 0;
	src1 = (char *)malloc(sizeof(char) * (size + 1));

	if (src1[i] = '\0')
		return NULL;
	while (i <= size)
	{
		src1[i] = src[i];
		i++;
	}
	src1[i] = '\0';
	return (src1);
}
