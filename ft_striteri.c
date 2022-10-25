#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*
 
 void my_func(unsigned int i, char *str)
 {
     printf("My inner function: index = %d and the string is %s\n", i, str);
 }
 int main()
 {
     char str[10] = "Hello.";
     printf("The result is %s\n", str);
     ft_striteri(str, my_func);
     printf("The result is %s\n", str);
     return 0;
 }
 
 */