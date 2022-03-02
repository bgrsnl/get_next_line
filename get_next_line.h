/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsenol <bsenol@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:47:28 by bsenol            #+#    #+#             */
/*   Updated: 2022/03/02 07:59:22 by bsenol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 4
#endif

char	*get_next_line(int fd);
char	*ft_strchr(const voidi *s, int x);
char	*ft_strjoin(cinst char *s1, char const ,s2);
char	*ft_read_line(char *src);
char	*ft_save(char *src);

#endif
