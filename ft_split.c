/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:39:24 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/09 00:43:34 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char		**result;
	t_size_t	len;
	t_size_t	ctr;
	t_size_t	strings;
	t_size_t	start;

	ctr = 0;
	strings = 0;
	start = 0;
	len = ft_strlen((char *) s);
	while (s[ctr] && ctr <= len)
	{
		if (s[ctr] != c)
		{
			strings++;
			while (s[ctr] != c)
				ctr++;
		}
		else
			ctr++;
	}
	result = (char **)malloc((strings + 1) * sizeof(char *));
	if (!result)
		return (0);
	ctr = 0;
	strings = 0;
	while (s[ctr] && ctr <= len)
	{
		if (s[ctr] != c)
		{
			start = ctr;
			while (s[ctr] != c)
				ctr++;
			result[strings] = (char *)malloc((ctr - start + 1) * sizeof(char));
			if (!result[strings])
				return (0);
			ft_strlcpy(result[strings], &s[start], ctr - start + 1);
			strings++;
		}
		else
			ctr++;
	}
	result[strings] = 0;
	return (result);
}
