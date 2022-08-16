/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:10:41 by sabazyan          #+#    #+#             */
/*   Updated: 2022/03/25 13:44:52 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t len)
{
	char		*p1;
	const char	*p2;
	size_t		i;

	p1 = dst;
	p2 = src;
	i = 0;
	if (p1 < p2)
	{
		while (i < len)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			p1[len - 1] = p2[len - 1];
			len--;
		}
	}
	return (dst);
}
