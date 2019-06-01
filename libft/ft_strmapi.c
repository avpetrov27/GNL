/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 18:22:23 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/04 18:08:21 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = (char*)malloc(sizeof(*result) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		result[i] = f(i, *s++);
		i++;
	}
	result[i] = '\0';
	return (result);
}
