/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:39:24 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/10 23:39:23 by rtinisha         ###   ########.fr       */
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
	if (s ==  NULL)
		return (NULL);
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
		return (NULL);
	ctr = 0;
	strings = 0;
	while (s[ctr] && ctr <= len)
	{
		if (s[ctr] != c)
		{
			start = ctr;
			while (s[ctr] && s[ctr] != c)
				ctr++;
			result[strings] = (char *)malloc((ctr - start + 1) * sizeof(char));
			if (!result[strings])
				return (0);
				// free();
			ft_strlcpy(result[strings], s + start, ctr - start + 1);
			strings++;
		}
		else
			ctr++;
	}
	result[strings] = NULL;
	return (result);
}

int	main(void)
{
	char	**s;
	int i = 0;

	s = ft_split("--1-2--3---4----5-----42", '-');
	printf("%d\n", malloc_size(s));
	while (s[i])
	{
		printf("%s\n", s[i]);
		i++;
	}
	return (0);
}
