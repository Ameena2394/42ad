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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if ((!*haystack && !*needle) || !*needle)
		return ((char *)haystack);
	if (!*haystack)
		return (0);
	j = 0;
	while (j < len && len != 0 && *haystack)
	{
		if (*haystack == *needle)
		{
			i = 1;
			while (needle[i] == haystack[i] && needle[i] && j + i < len)
				i++;
			if (!needle[i])
				return ((char *)haystack);
		}
		haystack++;
		j++;
	}
	return (NULL);
}
