/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 00:11:51 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/03 19:33:09 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t result;

	if (size <= ft_strlen(dst))
		result = size + ft_strlen(src);
	else
		result = ft_strlen(dst) + ft_strlen(src);
	while (*dst)
	{
		if (size)
			size--;
		dst++;
	}
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (result);
}
