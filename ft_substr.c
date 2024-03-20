/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:30:56 by iskaraag          #+#    #+#             */
/*   Updated: 2024/03/07 18:30:58 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_s;
	size_t	end;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	end = 0;
	if (start < len_s)
		end = len_s - start;
	if (end > len)
		end = len;
	sub = (char *)malloc(sizeof(char) * (end + 1));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, end);
	return (sub);
}
