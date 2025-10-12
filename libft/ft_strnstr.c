/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:08:33 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/10 19:16:58 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  needle_len;
    if (*needle == '\0')
        return ((char *)haystack);
    if (len == 0)
		return (NULL);
    i = 0;
    needle_len = ft_strlen(needle);
    while (haystack[i] && i < len)
    {
        j = 0;
        while (i + j < len && needle[j] == haystack[i + j])
        {
            j++;
        }
        if (j == needle_len)
            return ((char *)&haystack[i]);
        else
            i++;
    }
    return (NULL);
}