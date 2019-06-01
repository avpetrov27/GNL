/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 12:20:32 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/04 18:46:45 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	char	*index0;

	if (!s)
		return (NULL);
	result = (char*)malloc(sizeof(*result) * (len + 1));
	if (!result)
		return (NULL);
	index0 = result;
	s += start;
	while (len)
	{
		*result++ = *s++;
		len--;
	}
	*result = '\0';
	return (index0);
}
