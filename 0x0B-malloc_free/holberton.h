#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void _free_grid(int **grid, int height);
void free_grid(int **grid, int height);
int _strlen(char *str);
char *argstostr(int ac, char **av);
char *_strcat(char *dest, char *src);
char **strtow(char *str);
int ft_countword(char *str);
int ft_checkspace(char *str, int i);
char *_strndup(char *str, int n);
#endif
