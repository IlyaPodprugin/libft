/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:39:25 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/06 15:05:02 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, t_size_t len)
{
	char		*str;
	t_size_t	ctr;

	ctr = 0;
	str = (char *)malloc(len + 1 * sizeof(char));
	if (str)
	{
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
	return (0);
}
