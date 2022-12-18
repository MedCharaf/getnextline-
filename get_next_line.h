/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:38:13 by mbouderr          #+#    #+#             */
/*   Updated: 2022/12/18 22:42:24 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE 
#define BUFFER_SIZE 5
#endif
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t count , size_t size);
char *get_next_line(int fd);
char	*ft_strjoin(char  *s1, char  *s2);
size_t	ft_strlen( char *str);
ssize_t	ft_strchr( char *s, int c);
char	*ft_substr(char  *s, unsigned int start, size_t len);
char *newsos(char *strlwl);
void	ft_bzero(void *s, size_t n);





#endif