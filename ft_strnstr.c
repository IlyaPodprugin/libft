/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:12:48 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/11 22:25:57 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, t_size_t len)
{
	unsigned char	*first_sym;
	t_size_t		len_little;
	t_size_t		len_big;

	len_little = ft_strlen((char *)little);
	len_big = ft_strlen((char *)big);
	first_sym = 0;

	while (/* condition */)
	{
		first_sym = ft_strchr(big, little[0]);
		if (!first_sym)
			return (0);
		if (first_sym + len_little)
			if (!ft_strncmp(first_sym, little, len_little))
				return ()

	}
		return (0);
}
