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

char    *ft_strjoin(char const *s1, char const *s2)
  {
      char    *str;                                                                         
      int     s1_len;
      int     s2_len;
      
      if (!s1 || !s2)            
      return (NULL);
      s1_len = ft_strlen(s1);      
      s2_len = ft_strlen(s2);
      if (!(str = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1)))) 
          return (NULL);
      ft_memcpy(str, s1, s1_len);        
      ft_memcpy(str + s1_len, s2, s2_len); 
      str[s1_len + s2_len] = '\0';    
      return (str);
}
