/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:26:26 by malsheri          #+#    #+#             */
/*   Updated: 2024/03/09 15:37:27 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const	char	*str)
{
	int					si;
	unsigned long long	num;

	si = 1;
	num = 0;
	while (((*str >= 9 && *str <= 13) || *str == ' '))
		str++;
	if (*str == '-')
	{
		si = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != 0 && *str >= 48 && *str <= 57)
	{
		num = (num * 10) + (*str - 48);
		str++;
	}
	if (num >= 9223372036854775807ULL && si == 1)
		return (-1);
	if (num >= 9223372036854775807ULL && si == -1)
		return (0);
	return (num * si);
}
