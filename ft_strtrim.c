/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:32:24 by malsheri          #+#    #+#             */
/*   Updated: 2024/03/09 14:42:00 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	int		start;
	int		end;

	if (s == 0)
		return (NULL);
	if (set == 0)
		return (ft_strdup(s));
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_strchr(set, s[start]) && s[start])
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (ft_strchr(set, s[end]) && end >= 0)
		end--;
	i = end + 1 - start;
	return (ft_substr(s, start, i));
}
