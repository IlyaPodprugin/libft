#include "libft.h"

ft_size_t	ft_strlen(char *str)
{
	ft_size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}