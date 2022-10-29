/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:17:45 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 18:17:46 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*d;

	s = (char *)malloc(sizeof(s) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s && s1 && s2)
	{
		d = s;
		while (*s1 != '\0')
			*s++ = *s1++;
		while (*s2 != '\0')
			*s++ = *s2++;
		*s = '\0';
	}
	else
		return (NULL);
	return (d);
}
