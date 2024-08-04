/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:30:09 by malsheri          #+#    #+#             */
/*   Updated: 2024/03/08 19:44:57 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t l)
{
	unsigned char		*mdst;
	const unsigned char	*msrc;

	mdst = (unsigned char *) dst;
	msrc = (const unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (mdst < msrc)
	{
		while (l--)
			*mdst++ = *msrc++;
	}
	else if (mdst > msrc)
	{
		mdst = mdst + l;
		msrc = msrc + l;
		while (l--)
		{
			*(--mdst) = *(--msrc);
		}
	}
	return (dst);
}
