#include "libft.h"
#include <stdio.h>
/*#include <string.h>
#include "ft_memmove.c"
#include "ft_memcpy.c"
#include "ft_memchr.c"
#include "ft_strlcat.c"
#include "ft_strnstr.c"
#include "ft_strlen.c"
#include "ft_strtrim.c"
#include "ft_split.c"
#include "ft_strdup.c"
*/
void    ft_print_result(char const *s)
{       
        int             len;
        
        len = 0;
        while (s[len])
                len++;
        write(1, s, len);
}

int main(void)
{
	char *string = "lorem  ipsum d evismod non, mi.";
	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	char **result;
	
	result  =ft_split("      split       this for   me  !       ",' ');//lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');//ft_split("          ", ' ');// ft_split(string, 'i') ;//ft_split(string, ' ');
//	split_cmp_array(expected, result);i
int i = 0;
//	split_cmp_array(expected, result);i
	while(result[i])
	{
//ft_print_result(result[i]);
                             //   write(1, "\n", 1);
	printf("%s\n",(result[i]));
		i++;
		
	}
	printf("%s\n",(result[i]));
	return (0);
}
