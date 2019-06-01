/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 13:07:37 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/04 18:55:23 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*index0;

	if (!s1 || !s2)
		return (NULL);
	result = (char*)malloc(sizeof(*result) *
			(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	index0 = result;
	while (*s1)
		*result++ = *s1++;
	while (*s2)
		*result++ = *s2++;
	*result = '\0';
	return (index0);
}
