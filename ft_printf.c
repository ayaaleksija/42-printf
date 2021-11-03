/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:43:19 by agondard          #+#    #+#             */
/*   Updated: 2021/10/30 11:14:30 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Recherche de la lettre
void	ft_handle_letter(char c, t_printf *print)
{
	if (c == 'c')
		ft_print_c(print);
	else if (c == '%')
		ft_putchar('%', print);
	else if (c == 's')
		ft_print_s(print);
	else if (c == 'd' || c == 'i')
		ft_print_di(print);
	else if (c == 'p')
		ft_print_p(print);
	else if (c == 'x' || c == 'X')
	{
		if (c == 'x')
		{
			ft_print_x_min(print);
		}
		else
			ft_print_x_maj(print);
	}
	else if (c == 'u')
		ft_print_u(print);
}

void	ft_parse_letter(const char *str, t_printf *print)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			++i;
			ft_handle_letter(str[i], print);
		}
		else
			ft_putchar(str[i], print);
		i++;
	}
}

//fonction variadique
int	ft_printf(const char *format, ...)
{
	t_printf	print;

	print.i = 0;
	va_start(print.list, format);
	ft_parse_letter(format, &print);
	va_end(print.list);
	return (print.i);
}
