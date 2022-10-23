/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammustaf <ammustaf@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:45:58 by ammustaf          #+#    #+#             */
/*   Updated: 2022/10/19 17:45:58 by ammustaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int find_str(const char *str, const char *to_find, int n) 
 { 
     str += n; 

    while (*to_find) 
     { 
         if (*str != *to_find) 
             return (0); 
         str++; 
         to_find++; 
     } 

     return (1); 
 } 

 char *ft_strnstr(const char *haystack, const char *needle, size_t n) 
 { 
     size_t  i; 

     i = 0; 

     if (!*needle) 
         return ((char *)haystack); 

     if (!n) 
         return (0); 

     if (!*haystack) 
         return (0); 

     while ((haystack[i] != 0) && (i <= (n - ft_strlen(needle)))) 
     { 
         if (find_str(haystack, needle, i) == 1) 
             return ((char *)haystack + i); 
         i++; 
     } 

    return (0); 
 }