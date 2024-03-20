/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:24:16 by iskaraag          #+#    #+#             */
/*   Updated: 2024/03/01 16:24:17 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				a;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	a = 0;
	if (d < s)
	{
		while (a < n)
		{
			d[a] = d[a];
			a++;
		}
	}
	a = n;
	while (a > 0)
	{
		d[a - 1] = s[a - 1];
		a--;
	}
	return (dest);
}
/*int main() {
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10] = "Hello";
    char str4[10] = "World";

    // str2'nin içeriği, str1'in içeriğine kopyalanıyor.
    memmove(str2, str1, 5);
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    ft_memmove(str4, str3, 5);
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}*/
