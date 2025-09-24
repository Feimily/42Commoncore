/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:54:03 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/09/23 10:48:24 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	*temp;

	temp = a;
	a = b;
	b = temp;
}
/*int	main()
{
	int	num1 = 20;
	int	num2 = 15;
ft_swap(&num1,&num2);
printf("%d/n",num1);
printf("%d/n",num2);

}*/
