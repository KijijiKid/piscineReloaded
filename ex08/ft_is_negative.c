#include <unistd.h>

void ft_is_negativ(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else 
        write(1, "P", 1);
}

// int main(void)
// {
//     ft_is_negativ(1233);
// }