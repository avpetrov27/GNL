/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 22:24:35 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/05/12 13:18:46 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*alloc;

	if (size + 1 == 0)
		return (NULL);
	alloc = (char*)malloc(sizeof(*alloc) * (size + 1));
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, size + 1);
	return (alloc);
}
