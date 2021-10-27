/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:12:43 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/27 16:11:35 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsize)
{	
	ft_memcpy (dst, src, dstsize - 1);
	if (dstsize)
		dst[dstsize] = '\0';
	return (ft_strlen((char *) src));
}
