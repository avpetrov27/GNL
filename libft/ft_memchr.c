/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 20:11:40 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/21 21:38:10 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *unch_s;
	unsigned char unch_c;

	unch_s = (unsigned char *)s;
	unch_c = (unsigned char)c;
	while (n)
	{
		if (*unch_s == unch_c)
			return ((void *)unch_s);
		unch_s++;
		n--;
	}
	return (NULL);
}
