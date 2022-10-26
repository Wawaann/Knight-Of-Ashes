
int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb) == 1)
        return nb;
    while (my_is_prime(nb) == 0)
        nb += 1;
    return nb;
}
