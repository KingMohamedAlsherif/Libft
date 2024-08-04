/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:29:54 by malsheri          #+#    #+#             */
/*   Updated: 2024/03/08 23:30:49 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sr;
	size_t	i;

	i = 0;
	sr = (char *)s;
	while (i < n)
	{
		if ((unsigned char) sr[i] == (unsigned char)c)
			return (&sr[i]);
		i++;
	}
	return (NULL);
}
