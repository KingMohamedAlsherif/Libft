/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:32:11 by malsheri          #+#    #+#             */
/*   Updated: 2024/03/09 16:15:17 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *li, const char *ci, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (*ci == '\0')
		return ((char *) li);
	while (i < len && li[i] != '\0')
	{
		a = 0;
		while (i + a < len && li[i + a] == ci[a] && ci[a] != '\0')
			a++;
		if (ci[a] == '\0')
			return ((char *)li + i);
		i++;
	}
	return (0);
}
