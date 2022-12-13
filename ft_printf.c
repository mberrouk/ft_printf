/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:52:48 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/13 19:56:56 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_data_parcing(const char spec, int *len, va_list *arg, char *base)
{
	int	id;

	if (spec == 's')
		*len += ft_putstr(va_arg(*arg, char *));
	else if (spec == 'c')
		*len += ft_putchar(va_arg(*arg, int));
	else if (spec == 'd' || spec == 'i')
	{
		id = va_arg(*arg, int);
		if (id < 0)
			*len += ft_putchar('-');
		*len += ft_putnbr(spec, base, 10, id);
	}
	else if (spec == 'u')
		*len += ft_putnbr(spec, base, 10, va_arg(*arg, unsigned int));
	else if (spec == 'X' || spec == 'x')
		*len += ft_putnbr(spec, base, 16, va_arg(*arg, unsigned int));
	else if (spec == 'p')
	{
		*len += ft_putstr("0x");
		*len += ft_putnbr('x', base, 16, va_arg(*arg, unsigned long));
	}
	else
		*len += ft_putchar(spec);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	va_start(args, str);
	while (*str)
	{
		if (*(str) == '%')
		{
			if (*(str + 1))
				str++;
			else
				return (len);
			ft_data_parcing(*str, &len, &args, base);
		}
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (len);
}
