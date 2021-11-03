/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 00:24:35 by agondard          #+#    #+#             */
/*   Updated: 2021/11/03 13:17:11 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(t_printf *print)
{
	char	*str;

	str = va_arg(print->list, char *);
	if (str == 0)
		ft_putstr("(null)", print);
	else
		ft_putstr(str, print);
}
