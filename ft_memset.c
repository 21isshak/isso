/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:22:49 by iskaraag          #+#    #+#             */
/*   Updated: 2024/02/28 16:22:50 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t num)
{
	size_t			a;
	unsigned char	*str;

	str = dest;
	a = 0;
	while (a < num)
	{
		str[a] = value;
		a++;
	}
	return (dest);
}
