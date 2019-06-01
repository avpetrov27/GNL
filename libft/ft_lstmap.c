/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 15:21:42 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/05/12 13:12:19 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*index0;
	t_list	*result_f;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	if (!(result_f = f(lst)))
		return (NULL);
	index0 = result_f;
	while (lst->next)
	{
		if (!(result_f->next = f(lst->next)))
		{
			while (index0)
			{
				temp = index0->next;
				free(index0);
				index0 = temp;
			}
			return (NULL);
		}
		lst = lst->next;
		result_f = result_f->next;
	}
	return (index0);
}
