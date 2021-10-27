/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 23:10:23 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/27 23:26:53 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*char_;

	char_ = str + ft_strlen(str);
	while (*char_ != ch)
	{
		if (char_ == str)
			return (NULL);
		char_--;
	}
	return (char_);
}
