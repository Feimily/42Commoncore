/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:36:49 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/12 13:22:35 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

int			ft_isalpha(char c);
int			ft_isdigit(char c);
int			ft_isalnum(char c);
int			ft_isascii(char c);
int			ft_isprint(char c);
int         ft_memcmp(const void *s1, const void *s2, size_t n);
int         ft_atoi(const char *str)
void		*ft_memset(void *s, int c, size_t n);
void 		*ft_memcpy(void *dest, const void *src, size_t n);
void 		bzero(void *s, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t len);
void        *ft_calloc(size_t count, size_t size)
size_t		ft_strlen(const char *s);
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
#endif
