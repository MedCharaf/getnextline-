/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:37:08 by mbouderr          #+#    #+#             */
/*   Updated: 2022/12/18 23:16:53 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    char *buffer; 
    char *sos;   
    int ch7al9ra;  
    static char *zebala;  
    ch7al9ra = 1; 
    sos = ft_calloc(BUFFER_SIZE, 1); 
    buffer = ft_calloc(BUFFER_SIZE + 1, 1); 
     if(zebala)
    {
        sos = ft_strjoin(sos , zebala);
        free(zebala);
        zebala = NULL;
    }
    while (( ft_strchr(buffer, '\n') == -1)&&(ch7al9ra > 0)) 
    {
        ft_bzero(buffer,BUFFER_SIZE);
       ch7al9ra =  read(fd, buffer, BUFFER_SIZE); 
       if (ch7al9ra == -1)
       {
        free(sos);
        free(buffer);
        return NULL;
       }
       
        sos = ft_strjoin(sos, buffer); 
    }
    free(buffer);
     if(ft_strchr(sos,'\n')!= -1){
    zebala= ft_substr(sos,ft_strchr(sos,'\n')+1,ft_strchr(sos, '\0')); 
    sos = newsos(sos); 
     }
     if (ch7al9ra == 0&&ft_strlen(sos)==0)
     {
        free(sos);
      return NULL;
     }
     
    
    return sos; 
}
char *newsos(char *strlwl) 
{
    char *strjdid;
    strjdid = ft_substr(strlwl,0,ft_strchr(strlwl, '\n')+1); 
    free(strlwl); 
    return strjdid;
    
}
// int main()
// {
//     int fd = open("test.txt", O_RDONLY);
//     printf("%s", get_next_line(fd));
//     printf("%s", get_next_line(fd));
//         printf("%s", get_next_line(fd));
//                 printf("%s", get_next_line(fd));
//                                 printf("%s", get_next_line(fd));
//                                                                 printf("%s", get_next_line(fd));





// }