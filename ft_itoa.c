/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:29:48 by malsheri          #+#    #+#             */
/*   Updated: 2024/03/09 14:40:26 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = n;
	if (n == 0)
		i = 1;
	while (tmp != 0)
	{
		i++;
		tmp /= 10;
	}
	if (n < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		s_len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	s_len = count_size(n);
	itoa = malloc((count_size(n) + 1) * (sizeof(char)));
	if (!itoa)
		return (NULL);
	itoa[s_len] = '\0';
	if (n < 0)
	{
		n *= -1;
		itoa[0] = '-';
	}
	while (n > 0)
	{
		itoa[s_len - 1] = (n % 10) + 48;
		n /= 10;
		s_len--;
	}
	return (itoa);
}
