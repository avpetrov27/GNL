/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 15:55:48 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/03 19:56:06 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*index0;
	char	ch_c;

	ch_c = (char)c;
	index0 = (char *)s;
	while (*s)
		s++;
	while (*s != ch_c && s != index0)
		s--;
	if (*s == ch_c)
		return ((char *)s);
	else
		return (NULL);
}
