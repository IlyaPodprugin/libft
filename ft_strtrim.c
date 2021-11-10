/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:31:17 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/10 22:56:16 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	t_size_t	end;
	t_size_t	start;
	t_size_t	ctr;

	ctr = 0;
	start = 0;
	end = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end - 1]))
		end--;
	if (*s1 == '\0' || (int)end == -1)
		return ("");
	str = (char *)malloc((end - start + 1) * sizeof(char));
	if (!str)
		return (0);
	while (*s1 && start < end)
		str[ctr++] = s1[start++];
	str[ctr] = 0;
	return (str);
}
