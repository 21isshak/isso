/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:42:20 by iskaraag          #+#    #+#             */
/*   Updated: 2024/03/06 16:46:23 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == (char)c)
			return ((char *)(&s[a]));
		a++;
	}
	if (c == 0)
		return ((char *)(&s[a]));
	return (NULL);
}
/*int main() {
    char s[] = "emrba";
    char *a = ft_strrchr(s, 'e');
    if (a != NULL)
        printf (": %ld\n", a - s);
    else
        printf ("NOPE\n");
    return 0;
}*/
