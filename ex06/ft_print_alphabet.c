#include <unistd.h>

void ft_print_alphabet(void)
{
    char a = 'a';
    while (a <= 'z')
    {
        write(1, &a, 1);
        a++;
    }
}

// int main(void)
// {
//     ft_print_alphabet();
// }