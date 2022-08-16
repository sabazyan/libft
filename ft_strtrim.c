/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:03:04 by sabazyan          #+#    #+#             */
/*   Updated: 2022/03/27 12:26:13 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	count_mlen(int first, int last)
{
	if (last < first)
		return (1);
	else
		return (last - first + 2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		first_index;
	int		last_index;
	int		mlen;

	i = 0;
	while (check_set(set, s1[i]))
		i++;
	first_index = i;
	i = ft_strlen(s1) - 1;
	while (check_set(set, s1[i]))
		i--;
	last_index = i;
	mlen = count_mlen(first_index, last_index);
	str = (char *)malloc(mlen * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (first_index <= last_index)
		str[i++] = s1[first_index++];
	str[i] = '\0';
	return (str);
}
