/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:48:44 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 10:48:45 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if ((!*big && !*little) || !*little)
		return ((char *)big);
	if (!*big)
		return (0);
	j = 0;
	while (j < len && len != 0 && *big)
	{
		if (*big == *little)
		{
			i = 1;
			while (little[i] == big[i] && little[i] && j + i < len)
				i++;
			if (!little[i])
				return ((char *)big);
		}
		big++;
		j++;
	}
	return (NULL);
}
