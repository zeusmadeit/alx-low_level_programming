#ifndef MAIN_H
#define MAIN_H
char	_putchar(char c);
void	*malloc_checked(unsigned int b);
int	_strlen(char *s);
char	*_nconcat(char *s1, char *s2, int len, unsigned int n);
char	*string_nconcat(char *s1, char *s2, unsigned int n);
void	*_calloc(unsigned int nmemb, unsigned int size);
int	*array_range(int min, int max);
#endif
