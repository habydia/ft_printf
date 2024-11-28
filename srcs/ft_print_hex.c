/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadia <hadia@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:56:46 by hadia             #+#    #+#             */
/*   Updated: 2024/11/27 16:30:16 by hadia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_print_uphex(unsigned int n)
{
    int print_len = 0;
    char c;

    if (n >= 16)
    {
        print_len += ft_print_uphex(n / 16);
    }
    c = "0123456789ABCDEF"[n % 16];
    write(1, &c, 1);
    print_len++;
    return (print_len);
}

int ft_print_lowhex(unsigned int n)
{
    int print_len = 0;
    char c;

    if (n >= 16)
    {
        print_len += ft_print_lowhex(n / 16);
    }
    c = "0123456789abcdef"[n % 16];
    write(1, &c, 1);
    print_len++;
    return (print_len);
}

int ft_print_hex(unsigned int n, char format)
{
    int print_len = 0;

    if (format == 'X')
    {
        print_len = ft_print_uphex(n);
    }
    else if (format == 'x')
    {
        print_len = ft_print_lowhex(n);
    }
    return (print_len);
}

