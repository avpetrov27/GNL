/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 05:07:20 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/03 18:48:27 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*unch_dst;
	unsigned char	*unch_src;
	unsigned char	unch_c;

	unch_dst = (unsigned char *)dst;
	unch_src = (unsigned char *)src;
	unch_c = (unsigned char)c;
	while (n)
	{
		*unch_dst++ = *unch_src;
		if (*unch_src++ == unch_c)
			return ((void *)unch_dst);
		n--;
	}
	return (NULL);
}
