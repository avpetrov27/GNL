/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 15:27:55 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/04 20:14:54 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int		len;

	len = 1;
	if (n < 0)
		len++;
	while (n /= 10)
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = ft_len(n);
	result = (char*)malloc(sizeof(*result) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	if (n == 0)
		result[--len] = '0';
	while (n != 0)
	{
		result[--len] = (n > 0) ? (n % 10) + '0' : -(n % 10) + '0';
		n /= 10;
	}
	return (result);
}
