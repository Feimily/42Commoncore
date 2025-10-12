/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:46:05 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/02 18:26:02 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main()
{
	char src[10] = "Hola";
	printf("%s\n",(unsigned char *)memmove(src, "pepepote", 0));
}
/*	printf("%s\n",(unsigned char *)memmove(src, "pepe", 2));
	printf("%s\n",(unsigned char *)memmove(src, "pepe", 3));
	printf("%s\n",(unsigned char *)memmove(src, "pepe", 4));
	printf("%s\n",(unsigned char *)memmove(src, "pepepote", 5));
	printf("%s\n",(unsigned char *)memmove(src, "pepepote", 10));
	//printf("%s\n",(unsigned char *)memmove("Tuputamadre", "Adios", 2));
}*/

