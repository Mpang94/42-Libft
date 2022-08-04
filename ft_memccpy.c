/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:01:45 by marvin            #+#    #+#             */
/*   Updated: 2022/08/03 19:01:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memccpy (void *dst, const void *src, int c, size_t n)
{
	unsigned char	cuc;
	unsigned char	*dstc;
	const unsigned char *srccc;
	size_t	i;

	cuc = (unsigned char)c;
	dstc = (unsigned char *)dst;
	srccc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstc[i] = srccc[i];
		if (srccc[i] == cuc)
			return (dst +i + 1);
		i++;
	}
	return (0);
}