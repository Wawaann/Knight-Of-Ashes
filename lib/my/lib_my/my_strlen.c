
int my_strlen(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        c += 1;
    }
    return c;
}
