/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:58:20 by iskaraag          #+#    #+#             */
/*   Updated: 2024/03/07 17:58:29 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	mlt;
	int	nmr;

	mlt = 1;
	nmr = 0;
	a = 0;
	while ((str[a] > 8 && str[a] < 14) || str[a] == 32)
		a++;
	while (str[a] != '\0' && (str[a] == 43 || str[a] == 45))
	{
		if (str[a] == 45)
			mlt *= -1;
		a++;
	}
	while (str[a] != '\0' && str[a] > 47 && str[a] < 58)
	{
		nmr = (nmr * 10) + (str[a] - 48);
		a++;
	}
	nmr *= mlt;
	return (nmr);
}
/*#include <stdio.h>
int main ()
{
    //char *str =  "    \n--+--+1234ab567";
    printf("%d\n", ft_atoi("\t\v\f\r    \n--+-a-+1\n234\nab567"));
}*/
