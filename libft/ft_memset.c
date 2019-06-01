/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:33:10 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/03 18:40:39 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*unch_b;
	unsigned char	unch_c;

	unch_b = (unsigned char *)b;
	unch_c = (unsigned char)c;
	while (len)
	{
		*unch_b++ = unch_c;
		len--;
	}
	return (b);
}
