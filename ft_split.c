#include "libft.h"
char *splitter(char *ptr1, char *ptr2)
{
	char *ptr;
	int i;
	i = 0;
	ptr = ft_calloc(i + 2, sizeof(char *));
	while(ptr1 < ptr2)
	{
		ptr[i] = *ptr1;
	ptr1++;
	i++;
	}
	return (ptr);
}
char **ft_split(char const *s, char c)
{
	char	*ptr1;
	char	**p;
	char	*ptr2;
	int	i;
	i = 0;
	ptr1 = ft_strtrim(s, &c);
	ptr2 = ptr1;
	while ((ptr1 = ft_strchr(ptr1, c)) != NULL)
	{
		if (*(ptr1 - 1) == c)
			ptr1++;
		i++;
	}
	ptr1 = ptr2;
	i = 0;
	p = ft_calloc(i + 2, sizeof(char *));
	while ((ptr2 = ft_strchr(ptr2, c)) != NULL)
	{
		p[i] = splitter(ptr1, ptr2);
		while (*ptr2 == c)
			ptr2++;
		ptr1 = ptr2;
		i++;
	}
	if(!ptr2)
		p[i] = splitter(ptr1, ptr2);
	return (p);
}
