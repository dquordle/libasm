#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
int		ft_strcmp(char *s1, char *s2);
ssize_t	ft_write(int fd, void *buf, size_t nbyte);
ssize_t	ft_read(int fd, void *buf, size_t nbyte);
char	*ft_strdup(char *s1);

int main()
{
	char	*str = "Lol >= Kek";
	int		i;
	char	dst[100];
	
	i = 0;
	while (str[i])
		i++;
	printf("actual len : %d\n", i);
	printf("ft_strlen : %d\n", ft_strlen(str));
	printf("again : %d\n", ft_strlen(str));
	printf("initial string : %s\n", str);
	printf("strcpy return : %s\n", ft_strcpy(dst, str));
	printf("strcpy dst : %s\n", dst);
	printf("strcmp : %d\n", strcmp(str, dst));
	dst[1] = 'a';
	printf("my ft_strcmp : %d\n", ft_strcmp(str, dst));
	printf("\n%zd\n", ft_write(1, "Keksik is the best", 17));
	printf("\n%zd\n", ft_read(0, dst, 20));
	printf("%s\n", dst);
	char *mal = "Allocated";
	char *all;
	all = ft_strdup(mal);
	printf("%s\n", all);
	free(all);
}
