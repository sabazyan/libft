/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:06:31 by sabazyan          #+#    #+#             */
/*   Updated: 2022/03/27 13:05:22 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	size;
	size_t	mlen;

	size = ft_strlen(s);
	if (len == 0 || start > size)
		mlen = 0;
	else if (size - start + 1 > len)
		mlen = len;
	else
		mlen = size - start;
	ptr = (char *)malloc((mlen + 1) * sizeof(char));
	i = 0;
	if (!ptr)
		return (NULL);
	while (s[i] && len && size > start)
	{
		ptr[i] = s[start];
		i++;
		start++;
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}
