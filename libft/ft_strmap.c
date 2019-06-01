/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 16:44:32 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/04 17:50:54 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	char	*index0;

	if (!s || !f)
		return (NULL);
	result = (char*)malloc(sizeof(*result) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	index0 = result;
	while (*s)
		*result++ = f(*s++);
	*result = '\0';
	return (index0);
}
