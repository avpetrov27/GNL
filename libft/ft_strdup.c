/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:36:14 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/03 16:43:27 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = (char*)malloc(sizeof(*dup) * (ft_strlen(s1) + 1));
	if (!dup)
		return (NULL);
	return (ft_strcpy(dup, s1));
}
