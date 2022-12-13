/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:47:02 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/13 20:01:35 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(char format, char *base, unsigned int b, ...)
{
	va_list			nbr;
	static int		len;
	unsigned long	udec;
	int				dec;

	len = 0;
	va_start(nbr, b);
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (format == 'd' || format == 'i')
	{
		dec = (int)va_arg(nbr, int);
		if (dec == -2147483648)
			return (len += ft_putstr("2147483648"));
		if (dec < 0)
			dec = -dec;
		udec = dec;
	}
	else
		udec = va_arg(nbr, unsigned long);
	va_end(nbr);
	if (udec >= b)
		ft_putnbr(format, base, b, udec / b);
	return (len += ft_putchar(base[udec % b]));
}
