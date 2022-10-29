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

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	str[i] = 0;
	return (str);
}
