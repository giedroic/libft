#include "../include/ft_strnstr.h"
#include "../include/libft.h"
// hello llo
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	needle_len;

	needle_len = ft_strlen(needle);
	i = 0;
	while (*(haystack + i) != '\0')
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j) && *(haystack + i + j) != '\0' && (size_t) j < len)
			++j;
		if (j == needle_len)
			return ((char *) (haystack + i));
		++i;
	}
	return (NULL);
}	
