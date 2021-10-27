/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:38:14 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/27 20:17:42 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcat(char *dst, const char *src, t_size_t dstsize)
{
	t_size_t	len;

	len = ft_strlen(dst);
	ft_strlcpy(&dst[len], src, dstsize);
	return (ft_strlen(dst));
}