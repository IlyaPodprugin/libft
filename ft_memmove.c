/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:49:54 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/26 17:03:06 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, t_size_t n)
{
	unsigned char	*arrcopy;

	ft_memcpy(arrcopy, source, n);
	return (ft_memcpy(destination, arrcopy, n));
}
