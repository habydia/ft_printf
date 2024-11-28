/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadia <hadia@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:53:36 by hadia             #+#    #+#             */
/*   Updated: 2024/11/27 16:30:30 by hadia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>
#include <stdarg.h>

int	ft_print_ptr(uintptr_t ptr)
{
	int	len;

	ft_putstr("0x");
	len += 2;

	if (ptr == 0)
	{
		ft_putchar('0');
		len += 1;
	}
	else
	{
		ft_puthex_low(ptr);
		uintptr_t temp = ptr;
		while (temp)
		{
			temp /= 16;
			len++;
		}
	}
	return (len);
}
