/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 17:51:25 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/05/12 12:43:54 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	ispositive;
	long	result;
	long	previous;

	ispositive = 1;
	result = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r'
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
		ispositive = (*str++ == '-') ? 0 : 1;
	while (*str >= 48 && *str <= 57)
	{
		previous = result;
		result = result * 10 + (*str - 48);
		if (result < 0 || (result - (*str - 48)) / 10 != previous)
			return (ispositive) ? -1 : 0;
		str++;
	}
	return (ispositive) ? (int)result : (int)-result;
}
