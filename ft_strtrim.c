/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:20:31 by iskaraag          #+#    #+#             */
/*   Updated: 2024/03/07 21:20:32 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	char	*b;
	char	*rslt;

	rslt = malloc(ft_strlen(s1) + 1);
	if (rslt == NULL)
		return (NULL);
	a = (char *)s1;
	b = rslt;
	while (*a != '\0')
	{
		*b = *a;
		if (*b != *set)
			b++;
		a++;
	}
	*b = '\0';
	return (rslt);
}
/*int main(void) {
    char *str = " a wdf rawd f rawdf rga ";
    char *a = " ";
    char *c = ft_strtrim(str, a);
    printf(":%s", c);
    free(c);
    return 0;
}*/
