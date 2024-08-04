/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:32:16 by malsheri          #+#    #+#             */
/*   Updated: 2024/03/09 16:15:23 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;
	int		len;

	len = ft_strlen(s) - 1;
	i = 0;
	s1 = (char *)s;
	if ((char)c == '\0')
		return (s1 + ft_strlen(s));
	if (s[0] == '\0')
		return (NULL);
	while (len >= 0 && s1[len] != (unsigned char)c)
		len --;
	if (len == -1)
		return (NULL);
	return (s1 + len);
}
