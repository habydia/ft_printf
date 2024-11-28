#include <unistd.h>

int ft_print_unint(unsigned int n)
{
    int print_len = 0;
    char c;

    if (n >= 10)
    {
        print_len += ft_print_unint(n / 10);
    }
    c = (n % 10) + '0';
    ft_putchar(c); 
    print_len++;

    return (print_len);
}

