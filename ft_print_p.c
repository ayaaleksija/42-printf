/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 00:27:45 by agondard          #+#    #+#             */
/*   Updated: 2021/11/03 14:10:57 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_p(t_printf *print)
{
	void	*ptr;

	ptr = va_arg(print->list, void *);
	if (!ptr)
		ft_putstr("0x0", print);
	else
	{
		ft_putstr("0x", print);
		ft_putnbr_base_p((uintptr_t)ptr, BASE_HEX_MIN, print);
	}
}
