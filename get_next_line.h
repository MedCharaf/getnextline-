/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:38:13 by mbouderr          #+#    #+#             */
/*   Updated: 2022/12/23 20:08:49 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
void	*ft_calloc(size_t count, size_t size);

char	*ft_strjoin(char *s1, char *s2);

ssize_t	ft_strchr(char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*newsos(char *strlwl);
void	ft_bzero(void *s, size_t n);
char	*reader(int fd, int *ch7al9ra, char *sos);
#endif