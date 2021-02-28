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
	int		i;
	char	dst[100];
	char	*str1;
	char	*str2;
	char	*str3;
	ssize_t	len1;
	ssize_t len2;
	ssize_t len3;
	
	printf("let's get str1\n");
	i = 0;
	len1 = ft_read(0, str1, 100);
	str1[len1] = 0;
	printf("ft_read return: %zd\n", len1);
	while (str1[i])
		i++;
	printf("actual len : %d\n", i);
	printf("ft_strlen : %d\n", ft_strlen(str1));
	printf("again : %d\n", ft_strlen(str1));

	printf("nice! let's go for a str2\n");
	i = 0;
	len2 = ft_read(0, str2, 100);
	str2[len2] = 0;
	printf("ft_read return: %zd\n", len2);
	while (str2[i])
		i++;
	printf("actual len : %d\n", i);
	printf("ft_strlen : %d\n", ft_strlen(str2));
	printf("again : %d\n", ft_strlen(str2));

	printf("great job, we got one more to go!\n");
	i = 0;
	len3 = ft_read(0, str3, 100);
	str3[len3] = 0;
	printf("ft_read return: %zd\n", len3);
	while (str3[i])
		i++;
	printf("actual len : %d\n", i);
	printf("ft_strlen : %d\n", ft_strlen(str3));
	printf("again : %d\n", ft_strlen(str3));

	printf("initial string : %s\n", str1);
	printf("strcpy return : %s\n", ft_strcpy(dst, str1));
	printf("strcpy dst : %s\n", dst);
	printf("strcmp (same lines) : %d\n", strcmp(str1, dst));
	printf("my ft_strcmp (same lines) : %d\n", ft_strcmp(str1, dst));
	printf("strcmp (str2 & str3) : %d\n", strcmp(str2, str3));
	printf("my ft_strcmp (str2 & str3) : %d\n", ft_strcmp(str2, str3));

	printf("\n%zd\n", ft_write(1, "Keksik is the best", 17));
	printf("ft_read return with wrong fd: %zd\n", ft_read(4, dst, 20));
	char *mal = "Allocated";
	char *all;
	all = ft_strdup(mal);
	printf("%s\n", all);
	free(all);
}
