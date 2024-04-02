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
	int					size;
	int					i;
	int					rem;
	int					a;
	unsigned long long	num;
	unsigned long long	tmp;

	size = 1;
	char				hex[size];

	num = (unsigned long long)ptr;
	ft_putchar('0');
	ft_putchar('x');
	if (num == 0)
	{
		ft_putchar('0');
		return ;
	}
	size = 0;
	tmp = num;
	while (tmp != 0)
	{
		tmp /= 16;
		size++;
	}
	i = size - 1;
	rem = 0;
	while (i >= 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i] = rem + '0';
		else
			hex[i] = rem - 10 + 'a';
		num /= 16;
		i--;
	}
	i = 0;
	while (i < size)
	{
		ft_putchar(hex[i]);
		i++;
	}
}
