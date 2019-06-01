/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 14:38:51 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/29 22:15:30 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_qt_words(char const *s, char c)
{
	size_t		result;

	result = 0;
	while (*s)
	{
		while (*s != c && *s)
			s++;
		result++;
		while (*s == c && *s)
			s++;
	}
	return (result);
}

static size_t	ft_len_word(char const *s, char c)
{
	size_t		result;

	result = 0;
	while (*s && *s++ != c)
		result++;
	return (result);
}

static char		**free_all(char **res, size_t j)
{
	while (j)
	{
		j--;
		ft_strdel(&res[j]);
	}
	ft_strdel(res);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**res;
	size_t		i;
	size_t		j;
	size_t		k;

	if (!s || !(res = (char**)malloc(sizeof(*res) * (ft_qt_words(s, c) + 1))))
		return (NULL);
	k = 0;
	j = 0;
	while (s[k] != '\0')
	{
		i = 0;
		if (s[k++] != c)
		{
			if (!(res[j] = ft_strnew(ft_len_word(&s[--k], c))))
				return (free_all(res, j));
			while (s[k] != c && s[k] != '\0')
				res[j][i++] = s[k++];
			res[j++][i] = '\0';
		}
	}
	res[j] = NULL;
	return (res);
}
