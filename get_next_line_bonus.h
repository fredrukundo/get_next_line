/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 08:06:31 by frukundo          #+#    #+#             */
/*   Updated: 2023/11/26 15:34:03 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

char		*get_next_line(int fd);
char		*ft_read_line(int fd, char *buffer, char *backup);
char		*ft_left_str(char *line);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strdup(const char *s1);
char		*ft_strrchr(const char *str, int c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
size_t		ft_strlen(const char *str);

#endif