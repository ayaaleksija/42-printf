/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 00:27:45 by agondard          #+#    #+#             */
/*   Updated: 2021/10/30 13:11:37 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print_p(t_printf *print)
{
    uint64_t ptr;
    ptr = va_arg(print->list, uint64_t);
    ft_putstr("0x", print);

}
