#include <unistd.h>
#include <ctype.h>

void	*ft_inserting_sorting(void *list, size_t size)
{
	size_t		start;
	size_t		cursor;
	unsigned char	key;

	start = 1;
	while (start < size)
	{
		key = ((unsigned char *)list)[start];
		cursor = start - 1;
		while (cursor >= 0 && ((unsigned char *)list)[cursor] > key)
		{
			((unsigned char *)list)[cursor + 1] = ((unsigned char *)list)[cursor];
			cursor++;
		}
		((unsigned char *)list)[cursor + 1] = key;
		start++;
	}
	return ((unsigned char *)list);
}
