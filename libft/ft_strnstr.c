/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 19:21:33 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/04 21:58:27 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*result;
	char	*index0;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	index0 = (char *)needle;
	if (!*needle)
		return ((char *)haystack);
	if (*haystack && len >= needle_len)
		while (*haystack && len + 1 - needle_len)
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
			len--;
		}
	return (NULL);
}
