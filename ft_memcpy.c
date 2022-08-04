/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:28:47 by marvin            #+#    #+#             */
/*   Updated: 2022/06/20 18:28:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	char	*ndest;
	const char	*nsrc;

	ndest = dest;
	nsrc = src;
	if ( !dest && !src)
		return (0);
	while (n-- > 0)
	{
		*ndest = *nsrc;
		ndest++;
		nsrc++;
	}
	return (dest);
}