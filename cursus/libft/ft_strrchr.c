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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*l;

	if (s[0] == 0 && c == 0)
		return ((char *)&s[0]);
	else if (s[0] == 0)
		return (NULL);
	i = 0;
	l = NULL;
	if (s != NULL)
	{
		if (s[i] == 0)
			return (l= (char *)&s[i]);
		while (s[i])
		{
			if (s[i] == (char)c)
				l= (char *)&s[i];
			i++;
		}
		if (c == 0)
			return (l= (char *)&s[i]);
	}
	return (l);
}