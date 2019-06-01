/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 14:11:33 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/21 23:48:17 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recursive_printing(int n)
{
	if (n / 10 != 0)
	{
		ft_recursive_printing(n / 10);
		ft_recursive_printing(n % 10);
	}
	else
		ft_putchar((n > 0) ? (n + '0') : (-n + '0'));
}

void		ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	ft_recursive_printing(n);
}
