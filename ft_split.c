/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:47:54 by iskaraag          #+#    #+#             */
/*   Updated: 2024/03/08 15:47:56 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*f_strtok(char *str, const char *delim)
{
	static char	*next_token = NULL;
	char		*token_start;

	if (str != NULL)
		next_token = str;
	if (next_token == NULL || *next_token == '\0')
		return (NULL);
	while (*next_token != '\0' && ft_strchr(delim, *next_token) != NULL)
		next_token++;
	if (*next_token == '\0')
		return (NULL);
	token_start = next_token;
	while (*next_token != '\0' && ft_strchr(delim, *next_token) == NULL)
		next_token++;
	if (*next_token != '\0')
	{
		*next_token = '\0';
		next_token++;
	}
	return (token_start);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**v;
	int		nw;
	int		i;

	str = ft_strdup(s);
	if (f_strtok(str, &c) == 0)
		return (NULL);
	nw = 1;
	while (f_strtok(NULL, &c) != 0)
		nw += 1;
	ft_strcpy(str, s);
	v = malloc((nw + 1) * sizeof(char *));
	if (v == NULL)
		return (free (str), NULL);
	v[0] = ft_strdup(f_strtok(str, &c));
	i = 1;
	while (i != nw)
	{
		v[i] = ft_strdup(f_strtok(NULL, &c));
		i++;
	}
	v[i] = NULL;
	return (free (str), v);
}
/*int main()
{
  char ** v = ft_split("7jdfjhdf7jhsdhfbhbv7djvbnad87advbbaer87", '7');

  for (int i = 0; v[i] != NULL; ++i) {
    puts(v[i]);
    free(v[i]);
  }

  free(v);
  return 0;
}*/
