int ft_iterative_factorial(int nb)
{
    if (nb <= 0)
        return(0);
    int a = 1;
    while (0 < nb)
    {
        a *= nb;
        nb--;
    }
        return(a);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%i", ft_iterative_factorial(10));
// }