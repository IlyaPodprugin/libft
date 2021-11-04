/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:42:50 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/02 13:31:13 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size_t num, t_size_t size)
{
	void	*p;

	p = (void *)malloc(num * size);
	ft_bzero(p, num);
	return (p);
}
