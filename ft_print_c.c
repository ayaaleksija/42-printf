/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 00:20:55 by agondard          #+#    #+#             */
/*   Updated: 2021/10/30 13:44:57 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(t_printf *print)
{
	int c;
	c = va_arg(print->list, int);
	ft_putchar(c, print);
}
