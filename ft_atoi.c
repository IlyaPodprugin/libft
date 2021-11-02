/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:20:14 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/02 12:22:12 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	sign_cnt;

	result = 0;
	sign_cnt = 0;
	sign = 1;
	while (*str)
	{
		if (ft_isdigit(*str))
			result = result * 10 + *str - '0';
		else if (((*str >= 9 && *str <= 13)
				|| *str == '+' || *str == '-' || *str == ' ')
			&& result == 0 && sign_cnt < 1)
		{
			if (*str == '-' || *str == '+')
				sign_cnt++;
			if (*str == '-')
				sign = -sign;
		}
		else
			break ;
		str++;
	}
	return (result * sign);
}
