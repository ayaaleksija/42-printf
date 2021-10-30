/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 00:12:48 by agondard          #+#    #+#             */
/*   Updated: 2021/10/30 14:03:19 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, t_printf *print)
{
	write(1, &c, 1);
	print->i++;
}

void	ft_putstr(char *str, t_printf *print)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], print);
		i++;
	}
}

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	ft_check_letter(char letter_c)
{
	if (letter_c == 'c' || letter_c == 's' || letter_c == 'p'
		|| letter_c == 'd' || letter_c == 'i' || letter_c == 'u'
		|| letter_c == 'x' || letter_c == 'X' || letter_c == '%')
		return (1);
	return (0);
}

