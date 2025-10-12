/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:45:48 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/08 12:30:14 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	char	*cpy;
	char	*pt;
	size_t	i;

	cpy = (char *)s;
	*pt = NULL;
	i = 0;
	if (cpy[i] == c)
		pt = &cpy[i];
	i++;
	while (cpy[i - 1])
	{
		if (cpy[i] == c)
			pt = &cpy[i];
		i++;
	}
	return (pt);
}
