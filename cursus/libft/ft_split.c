/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:19:35 by ammustaf          #+#    #+#             */
/*   Updated: 2022/09/21 18:19:37 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_count(char const *s, char c)
{
    char last;
    int i;
    int j;

    last = c;
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        if (last == c && s[i] != c)
        {
            j++;
        }
        last = s[i];
        i++;
    }
    return j;
}
char **ft_split(char const *s, char c)
{
    int i;
    int k;
    int y;
    int z;
    char *small;
    char **big;

    if (!(big = (char **)malloc((ft_count(s, c) + 1) * sizeof(*big))))
        return (0);
    i = 0;
    y = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        k = 0;
        while (s[i + k] != '\0' && s[i + k] != c)
        {
            k++;
        }
        if (!(small = (char *)malloc((k + 1) * sizeof(char))))
            return (0);
        z = 0;
while (z < k)
        {
            small[z] = s[i];
            z++;
            i++;
        }
        small[k] = '\0';
        big[y] = small;
        y++;
    }
    big[y] = NULL;
    return (big);
}
