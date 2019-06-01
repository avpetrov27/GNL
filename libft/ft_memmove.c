/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 19:46:12 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/02/09 19:49:59 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*unch_dst;
	unsigned char	*unch_src;

	if (dst || src)
	{
		unch_dst = (unsigned char *)dst;
		unch_src = (unsigned char *)src;
		if (src < dst)
			while (len)
			{
				len--;
				unch_dst[len] = unch_src[len];
			}
		else
			while (len)
			{
				*unch_dst++ = *unch_src++;
				len--;
			}
	}
	return (dst);
}
