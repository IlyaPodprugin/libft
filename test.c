/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:11:41 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/27 16:09:09 by rtinisha         ###   ########.fr       */
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

	// ft_strlen()
	printf("\n----------------	ft_strlen()	----------------\n");
	char *str = "0123456789";
	printf("%s system:		%ld\n", str, strlen(str));
	printf("%s mine:		%ld\n", str, ft_strlen(str));

	// ft_memset()
	printf("\n----------------	ft_memset()	----------------\n");
	unsigned char src[15] = "1234567890";
	memset (src, '1', 10);
	printf ("system:	src: %s\n",src);
	ft_memset(src, '2', 10);
	printf ("myne:	src: %s\n",src);

	// ft_bzero()
	printf("\n----------------	ft_bzero()	----------------\n");
	bzero(src, sizeof(src));
	printf ("system:	src: %s\n",src);
	memset (src, '1', 10);
	ft_bzero(src, sizeof(src));
	printf ("myne:	src: %s\n",src);

	// ft_memcpy()
	printf("\n----------------	ft_memcpy()	----------------\n");
	strcpy((char*)src, "123456");
	unsigned char dst[10] = "";
	memcpy (dst, src, 6);
	printf ("system:	dst: %s\n", dst);
	ft_bzero(dst, sizeof(dst));
	ft_memcpy (dst, src, 6);
	printf ("myne:	dst: %s\n", dst);

	// ft_memmove()
	printf("\n----------------	ft_memmove()	----------------\n");
	strcpy((char*)src, "1234567890");
	printf ("src old: %s\n", src);
	memmove (&src[4], &src[3], 3);
	printf ("src new: %s\n", src);

	strcpy((char*)src, "1234567890");
	printf ("myne src old: %s\n", src);
	ft_memmove (&src[4], &src[3], 3);
	printf ("myne src new: %s\n", src);

	// ft_strlcpy()
	printf("\n----------------	ft_strlcpy()	----------------\n");
	strcpy((char*)src, "1234567890");
	char	buf[100];
	// strlcpy(buf, (char*)src, sizeof(buf));
	printf("src: %s\n", src);
	printf("buf: %s\n", buf);

	printf("ft_strlcpy:	%ld\n", ft_strlcpy(buf, (char*)src, sizeof(buf)));
	printf("src: %s\n", src);
	printf("buf: %s\n", buf);

	// ft_strlcat()
	printf("\n----------------	ft_strlcat()	----------------\n");
	strcpy(buf, "555");
	printf("%ld\n", ft_strlen(buf));
	printf("buf: %s\n", buf);
	printf("ft_strlcat:	%ld\n", ft_strlcat(buf, (char*)src, sizeof(buf)));
	// printf("ft_strlcat:	%ld\n", strlcat(buf, (char*)src, sizeof(buf)));
	printf("src: %s\n", src);
	printf("buf: %s\n", buf);

	return (0);
}
