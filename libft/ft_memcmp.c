/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:07:50 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/04 21:32:59 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *unch_s1;
	unsigned char *unch_s2;

	unch_s1 = (unsigned char *)s1;
	unch_s2 = (unsigned char *)s2;
	while (n && *unch_s1 == *unch_s2)
	{
		unch_s1++;
		unch_s2++;
		n--;
	}
	if (!n)
		return (0);
	return ((int)(*unch_s1 - *unch_s2));
}
