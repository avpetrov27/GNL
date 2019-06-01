/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 15:39:32 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/03 20:41:07 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*unch_s1;
	unsigned char	*unch_s2;

	unch_s1 = (unsigned char *)s1;
	unch_s2 = (unsigned char *)s2;
	while (*unch_s1 && *unch_s1 == *unch_s2)
	{
		unch_s1++;
		unch_s2++;
	}
	return ((int)(*unch_s1 - *unch_s2));
}
