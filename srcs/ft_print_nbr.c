int ft_putnbr(int param)
{
    char *str;
    int len;

    str = ft_itoa(param); 
    len = ft_print_str(str);
    free(str); 
    return (len); 
}
