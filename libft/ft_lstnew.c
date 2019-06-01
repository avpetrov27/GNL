/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 12:31:54 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/27 14:07:04 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*result;

	result = (t_list*)malloc(sizeof(*result));
	if (!result)
		return (NULL);
	if (content)
	{
		result->content = (void*)malloc(content_size);
		if (!result->content)
		{
			free(result);
			return (NULL);
		}
		ft_memcpy(result->content, content, content_size);
		result->content_size = content_size;
	}
	else
	{
		result->content = NULL;
		result->content_size = 0;
	}
	result->next = NULL;
	return (result);
}
