#include "ft_printf.h"
#include "libft.h"

int	ft_pars_format(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	
	if(format == 'c')
		print_len += ft_putchar_fd(va_arg(args, int), 1);
	else if (format == 's')
		print_len += ft_putstr_fd(va_arg(args, const char *), 1);
	else if (format == 'p')
		print_len += ft_print_ptr(va_arg(args, uintptr));
	else if (format == 'd' || format == 'i')
		print_len += ft_print_base(va_arg(args, int), format);
	else if (format == 'u')
		print_len += ft_print_unint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_len += ft_print_char('%');
	else
		return(print_len);
	
}

int	ft_printf(const char *str, ...)
{
	int	i;
	va_list	args;
	int	print_len;

	i = 0;
	print_len = 0;
	if(!str)
		return (0);
	va_start(args, str);
	while(str[i])
	{
		if(str[i] == '%')
		{
			print_len += ft_pars_format(args, str[i+1])

			i++;
		}
		else
		print_len += ft_printchar(str[i]); 
		i++;
	}
	va_end(args);
	return(print_len);
}

#include <stdio.h>

int main(void)
{
    int len = ft_printf("Hello %s! Number: %d, Hex: %x\n", "world", 42, 255);
    printf("Length: %d\n", len); // Affiche la longueur totale imprimée
    return 0;
}
