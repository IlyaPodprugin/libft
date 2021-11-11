/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:39:25 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/11 22:21:11 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, t_size_t len)
{
	char		*str;
	t_size_t	ctr;

	ctr = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (!str)
		return (0);
	while (*s && ctr <= start)
	{
		if (ctr == start)
		{
			ft_strlcpy(str, s, len + 1);
			return (str);
		}
		s++;
		ctr++;
	}
	ft_bzero(str, len);
	return (str);
}
