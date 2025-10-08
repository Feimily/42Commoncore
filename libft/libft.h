/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:36:49 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/05 09:56:40 by vaguayo-         ###   ########.fr       */
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
void		*ft_memset(void *s, int c, size_t n);
void 		*ft_memcpy(void *dest, const void *src, size_t n);
void 		bzero(void *s, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t len);
size_t		ft_strlen(const char *s);

#endif
