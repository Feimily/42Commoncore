/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:10:38 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/09/30 11:42:52 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isupper(char c)
{
	return ((c >= 'A' && c <= 'Z'));
}

static int	ft_islower(char c)
{
	return ((c >= 'a' && c <= 'z'));
}

int	ft_isalpha(char c)
{
	return ((ft_isupper(c) || ft_islower(c)));
}
