/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:12:48 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/01 16:06:59 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, t_size_t len)
{
	unsigned char	*first_sym;
	t_size_t		len_little;

	len_little = ft_strlen((char *)little);
	first_sym = 0;
	if (!len_little)
		return ((char *)big);
	else if (len)
		first_sym = ft_memchr(big, *little, len - len_little);
	if (first_sym)
		if (!ft_memcmp(first_sym, little, len_little))
			return ((char *)first_sym);
	return (0);
}
