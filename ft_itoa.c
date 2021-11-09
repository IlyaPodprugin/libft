/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 01:11:59 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/09 03:52:37 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*recursive_fill_result(char *s, int index, int n)
{
	// if (n / 10 > 0)
	// 	index = recursive_fill_result(s, index, n / 10);
	// s[index] = n % 10 + '0';
	// return (++index);
	if (n / 10 > 0)
		s = recursive_fill_result(s, index, n / 10);
	*s = n % 10 + '0';
	return (++s);
}

char	*ft_itoa(int n)
{
	int			num;
	char		*result;
	t_size_t	digits;

	num = n;
	digits = 0;
	while (num)
	{
		num = num / 10;
		digits++;
	}
	result = (char *)malloc(digits + 1 * sizeof(char));
	if (!result)
		return (0);
	// num = 0;
	// while (n && num <= digits)
	// {
	// 	result[num] = n % 10;
	// 	n /= 10;
	// 	num++;
	// }
	recursive_fill_result(result, 0, n);
	result[digits + 1] = 0;
	return (result);
}
