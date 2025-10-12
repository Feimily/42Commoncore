/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:30:48 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/08 13:06:50 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *csrc;
	size_t				i;
	
	if (!s)
		return (NULL);
	csrc = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (csrc[i] == (unsigned char)c)
			return ((void *)&csrc[i]);
		i++;
	}
	return (NULL);
}
