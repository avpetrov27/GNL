/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 15:50:37 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/04 22:04:22 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *unch_s1;
	unsigned char *unch_s2;

	unch_s1 = (unsigned char *)s1;
	unch_s2 = (unsigned char *)s2;
	while (*unch_s1 && *unch_s1 == *unch_s2 && n > 1)
	{
		unch_s1++;
		unch_s2++;
		n--;
	}
	if (n)
		return ((int)(*unch_s1 - *unch_s2));
	return (0);
}
