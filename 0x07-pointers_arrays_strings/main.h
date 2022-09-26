#ifndef main_h
#define main_h
void print_number(int n);
void print_triangle(int size);
int main(void);
void print_square(int size);
void print_diagonal(int n);
void print_line(int n);
void more_numbers(void);
int _putchar(char c);
void print_numbers(void);
void print_most_numbers(void);
int mul(int a, int b);
int _isupper(int c);
int _isdigit(int c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
#endif
