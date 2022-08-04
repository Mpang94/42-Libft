/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:11:12 by marvin            #+#    #+#             */
/*   Updated: 2022/08/04 17:11:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*pstr1;
	const unsigned char	*pstr2;

	pstr1 = (const unsigned char *)str1;
	pstr2 = (const unsigned char *)str2;
	while (n-- > 0)
	{
		if (*pstr1 != *pstr2)
			return (*pstr1 - *pstr2);
		pstr1++;
		pstr2++;
	}
	return (0);
}