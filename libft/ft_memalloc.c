/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 20:26:51 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/04 17:16:25 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*alloc;

	alloc = (void*)malloc(sizeof(*alloc) * size);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, size);
	return (alloc);
}
