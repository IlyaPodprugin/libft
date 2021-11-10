/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:42:50 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/10 22:51:55 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size_t num, t_size_t size)
{
	char		*p;
	t_size_t	mem;

	if (size == 0)
		mem = num;
	else
		mem = num * size;
	p = (char *)malloc(mem);
	if (!p)
		return (0);
	ft_bzero(p, num);
	return ((void *)p);
}
