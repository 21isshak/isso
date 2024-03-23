/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:12:42 by iskaraag          #+#    #+#             */
/*   Updated: 2024/03/07 16:12:43 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;

	a = 0;
	if (*little == 0)
		return ((char *)big);
	a = ft_strlen(little);
	while (*big != '\0' && a <= len)
	{
		if (*big == *little && ft_strncmp(big, little, a) == 0)
			return ((char *)big);
		big++;
		--len;
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	if (!little && len < 1)
		return ((char *)big);
	a = 0;
	while (big[a] != '\0')
	{
		b = 0;
		while (little[b] && big[a + b] == little[b] && a + b < len)
			b++;
		if (little[b] == 0)
			return ((char *)(big + a));
		a++;
	}
	return (NULL);
}
*/
/*int main()
{
    const char *h = "merhaba hello";
    const char *n = "a";
    char *r = ft_strnstr(h, n, 5);
    
    if (r != NULL)
        printf("Found: %s\n", r);
    else
        printf("Not found\n");
    return 0;
}*/
