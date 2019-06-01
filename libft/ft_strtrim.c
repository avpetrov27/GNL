/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 13:30:31 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/04 19:20:47 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*result;
	char	*index0;
	size_t	len;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	len = ft_strlen(s);
	while (len &&
			(s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	result = (char*)malloc(sizeof(*result) * (len + 1));
	if (!result)
		return (NULL);
	index0 = result;
	while (len)
	{
		*result++ = *s++;
		len--;
	}
	*result = '\0';
	return (index0);
}
