#include "libft.h"

static char	*ft_itoa_base_count(unsigned int n, int *count, unsigned int base)
{
	char	*ptr;

	if (n >= base)
	{
		*count += 1;
		ptr = ft_itoa_base_count(n / base, count, base);
	}
	else
		ptr = (char *) ft_calloc(*count + 1, sizeof(char));
	return (ptr);
}

static void	ft_itoa_base_aux(unsigned int n, int count, char *ptr, unsigned int base)
{
	if (n >= base)
		ft_itoa_base_aux(n / base, count - 1, ptr, base);
    if ((n % base) > 9)
	    ptr[count] = ((n % base) - 10) + 'A';
    else
        ptr[count] = (n % base) + '0';
}

char	*ft_itoa_base(unsigned int n, int base)
{
	char	*ptr;
	int		count;

	count = 1;
	ptr = ft_itoa_base_count(n, &count, base);
	ft_itoa_base_aux(n, count -1, ptr, base);
	return (ptr);
}
