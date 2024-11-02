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
	ft_printf("\033[0;32mdfg%%gre\033[0m\n");
	printf("dfg%%gre\n");
	ft_printf("\033[0;32mmyChar : %c\033[0m\n", c);
	printf("orgChar: %c\n", c);
	ft_printf("\033[0;32mmyString : %s\033[0m\n", str);
	printf("orgString: %s\n", str);
	ft_printf("\033[0;32mmyPointer : %p\033[0m\n", ptr);
	printf("orgPointer: %p\n", ptr);
	ft_printf("\033[0;32mmyDecimal : %d\033[0m\n", num);
	printf("orgDecimal: %d\n", num);
	ft_printf("\033[0;32mmyUnsigned Decimal : %u\033[0m\n", unum);
	printf("orgUnsigned Decimal: %u\n", unum);
	ft_printf("\033[0;32mmyHexadecimal (lowercase) : %x\033[0m\n", num);
	printf("orgHexadecimal (lowercase): %x\n", num);
	ft_printf("\033[0;32mmyHexadecimal (uppercase) : %X\033[0m\n", num);
	printf("orgHexadecimal (uppercase): %X\n", num);
	ft_printf("\033[0;32mmyPercentage : %%\033[0m\n");
	printf("orgPercentage: %%\n");
	ft_printf("\033[0;32mmyMorethenone :  hi I am %d years old and I am %s\033[0m\n", age, name);
	printf("orgMorethenone:  hi I am %d years old and I am %s\n", age, name);
	return (0);
}
