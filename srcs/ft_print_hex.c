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

int    ft_print_uphex(unsigned int n)
{
	int	print_len;

	print_len = 0;
        
               if (n >= 16)
                {
                        print_len += ft_print_hex(n / 16);
                }
                else
				write(1, &"0123456789ABCDEF", [n + 'a'], 1);
		return print_len;

}

int    ft_print_lowhex(unsigned int)
{
	int	print_len;

	print_len = 0;
        
               if (n >= 16)
                {
                        ft_print_hex(n / 16);
                        write(1, &"0123456789abcdef"[n % 10], 1);
                }
                else
				write(1, &"0123456789abcdef", [n + 'a'], 1);
		return print_len;

}

int    ft_print_hex(unsigned int n, char format)
{
	int	print_len;

	print_len = 0;

	if (format == 'X')
	{
		print_len = ft_print_uphex(n);
	}
	else if (format == x)
	{
		ft_print_lowhex(n);
	}
	return (print_len;)
}
