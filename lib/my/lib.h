
#include <unistd.h>

#ifndef LIB
    #define LIB

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char *str);
void my_isneg(int n);
int my_is_prime(int nb);
char my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmen(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
int testc(char const *str, int i);
int testn(char const *str, int i);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char *src, int n);
char *my_strstr(char *str, char *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);

//:::::::::: Fonction my_printf ::::::::::
void my_printf(char *s, ...);

#endif
