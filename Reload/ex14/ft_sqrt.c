/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:23:58 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/09/24 15:03:33 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 0;
	while (res <= nb)
	{
		if	((res * res) == nb)
			return (res);
			else
			{
				printf("%d\n",res);
				res++;
			}
		}
	return (0);
}
/*int	main()
{
	int	nb = 6;
	
	printf("%d\n",ft_sqrt(nb));
	return (0);
}*/
