void    ft_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// #include <stdio.h>
// int main(void)
// {
//     int a = 20;
//     int b = 30;
//     ft_swap(&a, &b);
//     printf("A: %i\n", a);
//     printf("B: %i\n", b);
// }