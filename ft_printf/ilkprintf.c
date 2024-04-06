/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:19:46 by iskaraag          #+#    #+#             */
/*   Updated: 2024/04/02 01:19:48 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_puthex_up(unsigned int num);
void	ft_puthex(unsigned int num);
void	ft_putpntr(void *ptr);
int		ft_printf(const char *format, ...);

struct s_variables
{
	int		size;
	int		i;
	int		rem;
	int		ahm;
	int		num;
	char	c;
};

#endif















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













/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:11:56 by iskaraag          #+#    #+#             */
/*   Updated: 2024/04/02 01:11:58 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}



















/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:12:55 by iskaraag          #+#    #+#             */
/*   Updated: 2024/04/02 01:12:56 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int num)
{
	if (num >= 16)
	{
		ft_puthex(num / 16);
		ft_puthex(num % 16);
	}
	else
	{
		if (num < 10)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}





















/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putheX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:12:44 by iskaraag          #+#    #+#             */
/*   Updated: 2024/04/02 01:12:45 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_up(unsigned int num)
{
	if (num >= 16)
	{
		ft_puthex_up(num / 16);
		ft_puthex_up(num % 16);
	}
	else
	{
		if (num < 10)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'A');
	}
}





































/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:12:20 by iskaraag          #+#    #+#             */
/*   Updated: 2024/04/02 01:12:21 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}




































/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpntr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:14:24 by iskaraag          #+#    #+#             */
/*   Updated: 2024/04/02 01:14:25 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpntr(void *ptr)
{
	struct s_variables	my;
	unsigned long long	num;
	unsigned long long	tmp;
	char				*hex;

	num = (unsigned long long)ptr;
	ft_putchar('0');
	ft_putchar('x');
	if (num == 0)
	{
		ft_putchar('0');
		return ;
	}
	my.size = 0;
	tmp = num;
	while (tmp != 0)
	{
		tmp /= 16;
		my.size++;
	}
	hex = (char *)malloc(my.size * sizeof(char));
	if (hex == NULL)
		return ;
	my.i = my.size - 1;
	my.rem = 0;
	while (my.i >= 0)
	{
		my.rem = num % 16;
		if (my.rem < 10)
			hex[my.i] = my.rem + '0';
		else
			hex[my.i] = my.rem - 10 + 'a';
		num /= 16;
		my.i--;
	}
	my.i = 0;
	while (my.i < my.size)
	{
		ft_putchar(hex[my.i]);
		my.i++;
	}
	free(hex);
}
































/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 01:19:50 by iskaraag          #+#    #+#             */
/*   Updated: 2024/04/03 01:19:52 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//ccc main.c ft_printf.h ft_printf.c ft_putchar.c ft_puthex.c ft_puthex_up.c ft_putnbr.c ft_putpntr.c
int main()
{
    char c = 'A';
    char *str = "Hello, World!";
    int num = -123;
    unsigned int unum = 456;
    void *ptr = &num;
    int age = 24;
    char *name = "isacc";

    ft_printf("dfg%%gre\n");
    printf("dfg%%gre\n");
    ft_printf("myChar : %c\n", c);
    printf("orgChar: %c\n", c);
    ft_printf("myString : %s\n", str);
    printf("orgString: %s\n", str);
    ft_printf("myPointer : %p\n", ptr);
    printf("orgPointer: %p\n", ptr);
    ft_printf("myDecimal : %d\n", num);
    printf("orgDecimal: %d\n", num);
    ft_printf("myUnsigned Decimal : %u\n", unum);
    printf("orgUnsigned Decimal: %u\n", unum);
    ft_printf("myHexadecimal (lowercase) : %x\n", num);
    printf("orgHexadecimal (lowercase): %x\n", num);
    ft_printf("myHexadecimal (uppercase) : %X\n", num);
    printf("orgHexadecimal (uppercase): %X\n", num);
    ft_printf("myPercentage : %%\n"); // Yüzde işareti yazdırma
    printf("orgPercentage: %%\n");
    ft_printf("myMorethenone :  hi I am %d years old and I am %s\n", age, name);
    printf("orgMorethenone:  hi I am %d years old and I am %s\n", age, name);

    return 0;
}
