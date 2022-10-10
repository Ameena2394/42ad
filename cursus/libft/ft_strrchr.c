/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:47:08 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 10:47:09 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	i = ft_strlen(str);
	char *strr = (char *) str;
		
	while(i >= 0)
	{
		if (str[i] == c)
			return (strr + i);
		i--;
	}
	return NULL;
}