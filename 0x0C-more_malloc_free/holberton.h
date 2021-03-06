#ifndef HOLBERTON_H
#define HOLBERTON_H
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _strlen(char *s);
char *_memset(char *s, char b, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *mul(char *s1, char *s2);
char *revandzero(int *tab, int i, int j, int length, char *str, int digit);
int _isdigit(int c);
#endif
