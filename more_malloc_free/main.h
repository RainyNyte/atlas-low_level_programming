#ifndef MAIN_H
#define MAIN_H
int _putchar(char);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int);
int _isalpha(int);
int print_sign(int);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
int print_to_98(int);
int _isupper(int);
int _isdigit(int);
int mul(int, int);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int);
void print_diagonal(int);
void print_square(int);
void print_triangle(int);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *s);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void _puts_recursion(char *str);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int helpy(int x, int y);
int is_prime_number(int n);
int helpy_prime(int x, int y);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
#endif
