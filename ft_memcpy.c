/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:18:11 by sabazyan          #+#    #+#             */
/*   Updated: 2022/03/25 15:26:25 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t n)
{
	char	*p1;
	char	*p2;
	size_t	i;

	p1 = (char *)dst;
	p2 = (char *)src;
	i = 0;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (dst);
}
