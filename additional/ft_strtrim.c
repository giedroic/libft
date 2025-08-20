#include "../include/ft_strtrim.h"
#include "../include/libft.h"
#include <stdlib.h>

static int	is_inset(char c, const char *set);
static int	set_strlen(const char *s, const char *set);

char	*ft_strtrim(const char *s1, const char *s2)
{
	int		len;
	int		i;
	char	*str;

	len = set_strlen(s1, s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		if (is_inset(*s1, s2))
			*(str + i++) = *s1;
		++s1;
	}
	*(str + i) = '\0';
	return (str);
}

static int	is_inset(char c, const char *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		++set;
	}
	return (0);
}

static int	set_strlen(const char *s, const char *set)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		if (is_inset(*s++, set))
			++len;
	}
	return (len);
}
