/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:19:57 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/19 16:48:46 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*cpy;

	cpy = (char *)s;
	i = 0;
	if (cpy[i] == c)
		return (&cpy[i]);
	i++;
	while (cpy[i - 1])
	{
		if (cpy[i] == c)
			return (&cpy[i]);
		i++;
	}
	return (NULL);
}
