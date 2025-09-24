/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:57:12 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/09/23 14:27:52 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int i;
	int fact;

	if (nb <= 0 || nb > 12)
		return (0);
	fact = 1;
	i = 1;
	if (i <= nb)
	return (nb * ft_recursive_factorial(nb - 1))
}
