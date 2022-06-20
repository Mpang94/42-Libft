/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:02:03 by marvin            #+#    #+#             */
/*   Updated: 2022/06/20 14:02:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memset(void *str, int c, size_t n)
{
    size_t  i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char *)str;
    while(i < n)
    {
        *ptr = (unsigned char)c;
        i++;
        ptr++;
    }
    return (str);
}