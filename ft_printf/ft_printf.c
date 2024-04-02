/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:11:04 by iskaraag          #+#    #+#             */
/*   Updated: 2024/04/02 01:11:06 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	struct s_variables	mine;
	char				*str;
	void				*ptr;
	unsigned int		nm;
	va_list				args;

	mine.ahm = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				mine.c = va_arg(args, int);
				ft_putchar(mine.c);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				while (*str != '\0')
				{
					ft_putchar(*str);
					str++;
				}
			}
			else if (*format == 'p')
			{
				ptr = va_arg(args, void *);
				ft_putpntr(ptr);
			}
			else if (*format == 'd' || *format == 'i')
			{
				mine.num = va_arg(args, int);
				ft_putnbr(mine.num);
			}
			else if (*format == 'u')
			{
				nm = va_arg(args, unsigned int);
				ft_putnbr(nm);
			}
			else if (*format == 'x')
			{
				nm = va_arg(args, unsigned int);
				ft_puthex(nm);
			}
			else if (*format == 'X')
			{
				nm = va_arg(args, unsigned int);
				ft_puthex_up(nm);
			}
			else if (*format == '%')
				ft_putchar('%');
			else
			{
				ft_putchar('%');
				ft_putchar(*format);
			}
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (mine.ahm);
}
