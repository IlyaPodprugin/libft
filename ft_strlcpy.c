/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:12:43 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/01 10:49:58 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsize)
{
	t_size_t	sz;

	sz = 0;
	if (dstsize > 0)
	{
		while (src[sz] && sz < (dstsize - 1))
		{
			dst[sz] = src[sz];
			sz++;
		}
		dst[sz] = '\0';
	}
	return (ft_strlen((char *) src));
}
