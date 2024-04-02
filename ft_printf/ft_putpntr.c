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
