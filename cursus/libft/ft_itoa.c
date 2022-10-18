/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:19:50 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 18:19:52 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	sizelen(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char		*str_num;
	size_t	numbers;
	long int	num;

	str_num = (char *)malloc(sizeof(char) * (numbers + 1));
	num = n;
	numbers = sizelen(n);
	if (n < 0)
	{
		num *= -1;
		numbers++;
	}
	if (!str_num)
		return (NULL);
	*(str_num + numbers) = 0;
	while (numbers--)
	{
		*(str_num + numbers) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}