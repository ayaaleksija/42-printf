/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 00:27:45 by agondard          #+#    #+#             */
/*   Updated: 2021/10/31 12:24:27 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print_p(t_printf *print)
{
    uintptr_t ptr;

    ptr = va_arg(print->list, uintptr_t );
    ft_putstr("0x", print);
    ft_putnbr_base_p(ptr, BASE_HEX_MIN, print);
}
