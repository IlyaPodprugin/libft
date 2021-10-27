/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:38:14 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/27 16:11:41 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcat(char *dst, const char *src, t_size_t dstsize)
{
    // while (*dst++)
	// {
	// 	/* code */
	// }
    return (ft_strlcpy(dst, src, dstsize) + ft_strlen(dst));
}
