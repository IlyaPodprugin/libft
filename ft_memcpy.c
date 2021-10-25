/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:03:43 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/25 22:18:42 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, t_size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;

	dest_ptr = destination;
	src_ptr = source;
	while (n--)
		*dest_ptr++ = *src_ptr++;
	return (destination);
}
