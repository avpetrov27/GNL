/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 17:28:58 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/03 22:14:33 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*result;
	char	*index0;

	index0 = (char *)needle;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		result = (char *)haystack;
		while (*haystack == *needle)
		{
			if (!needle[1])
				return (result);
			haystack++;
			needle++;
		}
		needle = index0;
		haystack = result;
		haystack++;
	}
	return (NULL);
}
