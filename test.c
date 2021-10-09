/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:11:41 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/09 20:11:46 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	c;

	c = 'Q';
	printf("Uppercase alphabet isalpha: %d\n", isalpha(c));
	printf("Uppercase alphabet ft_isalpha: %d\n", ft_isalpha(c));
	c = 'q';
	printf("Lowercase alphabet isalpha: %d\n", isalpha(c));
	printf("Lowercase alphabet ft_isalpha: %d\n", ft_isalpha(c));
	c = '+';
	printf("Non-alphabetic character isalpha: %d\n", isalpha(c));
	printf("Non-alphabetic character ft_isalpha: %d\n", ft_isalpha(c));
	return (0);
}
	// ft_isalpha()
