
int my_is_prime(int nb)
{
    for (int i = 2; i < nb; i += 1) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
