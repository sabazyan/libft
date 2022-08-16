/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:13:20 by sabazyan          #+#    #+#             */
/*   Updated: 2022/03/25 13:45:18 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*str, int c)
{
	int		i;
	char	sym;

	i = 0;
	sym = c;
	while (str[i] && str[i] != sym)
		i++;
	if (str[i] == sym)
		return ((char *)(str + i));
	return (NULL);
}
