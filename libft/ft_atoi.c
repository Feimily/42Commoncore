/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:24:40 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/12 13:08:48 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int  ft_isspace(char c)
{
    if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
        return (1);
    return (0);
}

int    ft_atoi(const char *str)
{
    int i;
    int sing;
    int res;
    i = 0
    sing = 1;
    while (ft_isspace(str[i]))
        i++; 
    if (str[i] == '+' && str[i + 1] != '-')
        i++
    if (str[i] == '-')
    {
        sing = -sing
        i++
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
        res += str[i] - 48
        i++;
    }
    res = res * sing
    return (res);
}