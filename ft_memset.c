#include "libft.h"

// void	*ft_memset(void* destination, int c, size_t n)
// {
// 	while (n--)
// 	{
// 		destination = c;
// 		*destination++;
// 	}
// 	return (destination);
// }

void	*ft_memset(void* destination, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char sym;

	ptr = (unsigned char *)destination;
	sym = (unsigned char)c;
	while (n--)
		*ptr++ = sym;
	return (destination);
}
