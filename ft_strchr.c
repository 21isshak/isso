/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:27:22 by iskaraag          #+#    #+#             */
/*   Updated: 2024/03/06 16:27:24 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/*int main() {
    char s[] = "merba";
    char *a = ft_strchr(s, 'a');
    if (a != NULL)
        printf (": %ld\n", a - s);
    else
        printf ("NOPE\n");
    return 0;
}*/
