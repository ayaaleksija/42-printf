/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 00:12:48 by agondard          #+#    #+#             */
/*   Updated: 2021/11/03 13:20:21 by agondard         ###   ########.fr       */
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
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], print);
		i++;
	}
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}
