/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 04:44:39 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/02/09 19:38:31 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*unch_dst;
	unsigned char	*unch_src;

	if (dst || src)
	{
		unch_dst = (unsigned char *)dst;
		unch_src = (unsigned char *)src;
		while (n)
		{
			*unch_dst++ = *unch_src++;
			n--;
		}
	}
	return (dst);
}
