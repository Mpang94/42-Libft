/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:23:05 by marvin            #+#    #+#             */
/*   Updated: 2022/08/04 17:23:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ndest;
	unsigned char	*nsrc;

	if (!src && !dest)
	{
		return (0);
	}
	if (dest > src)
	{
		ndest = dest + n;
		nsrc = src + n;
		while (n-- > 0)
			*(--ndest) = *(--nsrc);
	}
	else
	{
		ndest = dest;
		nsrc = src;
		while (n-- > 0)
			*ndest++ = *nsrc++;
	}
	return (dest);
}