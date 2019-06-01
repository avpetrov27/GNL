/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 17:26:56 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/01/21 23:56:01 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recursive_printing_fd(int n, int fd)
{
	if (n / 10 != 0)
	{
		ft_recursive_printing_fd(n / 10, fd);
		ft_recursive_printing_fd(n % 10, fd);
	}
	else
		ft_putchar_fd((n > 0) ? (n + '0') : (-n + '0'), fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	ft_recursive_printing_fd(n, fd);
}
