/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:15:22 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/03 19:49:39 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char ch_c;

	ch_c = (char)c;
	while (*s != ch_c && *s)
		s++;
	if (*s == ch_c)
		return ((char *)s);
	else
		return (NULL);
}
