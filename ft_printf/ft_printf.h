/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:19:46 by iskaraag          #+#    #+#             */
/*   Updated: 2024/04/02 01:19:48 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putheX(unsigned int num);
void	ft_puthex(unsigned int num);
void	ft_putpntr(void *ptr);
int		ft_printf(const char *format, ...);

#endif
