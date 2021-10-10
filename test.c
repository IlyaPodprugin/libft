/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:11:41 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/10 20:35:41 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	// ft_isalpha()
	char	c;

	printf("\n\n----------------	ft_isalpha()	----------------\n");
	c = 'Q';
	printf("Uppercase alphabet isalpha: %d\n", isalpha(c));
	printf("Uppercase alphabet ft_isalpha: %d\n", ft_isalpha(c));
	c = 'q';
	printf("Lowercase alphabet isalpha: %d\n", isalpha(c));
	printf("Lowercase alphabet ft_isalpha: %d\n", ft_isalpha(c));
	c = '+';
	printf("Non-alphabetic character isalpha: %d\n", isalpha(c));
	printf("Non-alphabetic character ft_isalpha: %d\n", ft_isalpha(c));

	// ft_isdigit()
	printf("\n----------------	ft_isdigit()	----------------\n");
	c = '7';
	printf("isdigit(%c): %d\n", c, isdigit(c));
	printf("ft_isdigit(%c): %d\n", c, ft_isdigit(c));
	c = 'b';
	printf("isdigit(%c): %d\n", c, isdigit(c));
	printf("ft_isdigit(%c): %d\n", c, ft_isdigit(c));

	// ft_isalnum()
	printf("\n----------------	ft_isalnum()	----------------\n");
	c = '5';
	printf("%c is passed to isalnum(), return value is %d\n", c, isalnum(c));
	printf("%c is passed to ft_isalnum(), return value is %d\n", c, ft_isalnum(c));
	c = 'Q';
	printf("%c is passed to isalnum(), return value is %d\n", c, isalnum(c));
	printf("%c is passed to ft_isalnum(), return value is %d\n", c, ft_isalnum(c));
	c = 'l';
	printf("%c is passed to isalnum(), return value is %d\n", c, isalnum(c));
	printf("%c is passed to ft_isalnum(), return value is %d\n", c, ft_isalnum(c));
	c = '+';
	printf("%c is passed to isalnum(), return value is %d\n", c, isalnum(c));
	printf("%c is passed to ft_isalnum(), return value is %d\n", c, ft_isalnum(c));

	// ft_isascii()
	printf("\n----------------	ft_isascii()	----------------\n");
	c = '5';
	printf("%c system:	%d\n", c, isascii(c));
	printf("%c mine:	%d\n", c, ft_isascii(c));
	c = 'Q';
	printf("%c system:	%d\n", c, isascii(c));
	printf("%c mine:	%d\n", c, ft_isascii(c));
	c = 'l';
	printf("%c system:	%d\n", c, isascii(c));
	printf("%c mine:	%d\n", c, ft_isascii(c));
	c = ' ';
	printf("%c system:	%d\n", c, isascii(200));
	printf("%c mine:	%d\n", c, ft_isascii(200));

	// ft_isprint()
	printf("\n----------------	ft_isprint()	----------------\n");
	c = 'Q';
    printf("%c system:	%d\n", c, isprint(c));
    printf("%c mine:	%d\n", c, ft_isprint(c));
    c = '\n';
    printf("%c system:	%d\n", c, isprint(200));
    printf("%c mine:	%d\n", c, ft_isprint(200));
	return (0);
}
