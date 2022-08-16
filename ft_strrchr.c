/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:35:24 by sabazyan          #+#    #+#             */
/*   Updated: 2022/03/25 13:47:49 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char	*str, int c)
{
	int		i;
	char	sym;

	i = 0;
	sym = (char)c;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == sym)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
