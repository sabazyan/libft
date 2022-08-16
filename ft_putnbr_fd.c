/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:44:37 by sabazyan          #+#    #+#             */
/*   Updated: 2022/03/28 15:30:44 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = -n;
	}
	else
	num = n;
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd(num % 10 + 48, fd);
	}
	else
		ft_putchar_fd(num + 48, fd);
}
