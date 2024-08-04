/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:26:16 by malsheri          #+#    #+#             */
/*   Updated: 2024/03/09 16:13:19 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t z)
{
	size_t	i;
	size_t	bt;
	void	*p;

	i = 0;
	if (c == 0 | z == 0)
	{
		c = 1 ;
		z = 1;
	}
	if (c > SIZE_MAX / z)
		return (NULL);
	bt = c * z;
	p = malloc(bt);
	if (!p)
		return (NULL);
	while (i < bt)
	{
		((unsigned char *)p)[i] = 0;
		i++;
	}
	return (p);
}
