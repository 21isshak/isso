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

// ccc main.c ft_printf.h ft_printf.c ft_putchar.c ft_puthex.c ft_puthex_up.c ft_putnbr.c ft_putpntr.c ft_putstr.c ft_putnbr_u.c
int	main(void)
{
	char			c;
	char			*str;
	int				num;
	unsigned int	unum;
	void			*ptr;
	int				age;
	char			*name;

	c = 'A';
	str = "Hello, World!";
	num = -123;
	unum = 456;
	ptr = &num;
	age = 24;
	name = "isacc";
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
	ft_printf("myPercentage : %%\n");
	printf("orgPercentage: %%\n");
	ft_printf("myMorethenone :  hi I am %d years old and I am %s\n", age, name);
	printf("orgMorethenone:  hi I am %d years old and I am %s\n", age, name);
	return (0);
}
