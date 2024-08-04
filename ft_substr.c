/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:32:31 by malsheri          #+#    #+#             */
/*   Updated: 2024/03/09 16:15:40 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	a_len;

	if (!s)
		return (NULL);
	a_len = ft_strlen(s);
	if (len == 0 || start >= a_len)
		return (ft_strdup(""));
	if (len > a_len - start)
		len = a_len - start;
	str = malloc (sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy (str, s + start, len + 1);
	return (str);
}
