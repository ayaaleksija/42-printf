/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:36:51 by agondard          #+#    #+#             */
/*   Updated: 2021/10/31 12:33:36 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_u(t_printf *print)
{
	unsigned int	u;

	u = va_arg(print->list, unsigned int);
	ft_putnbr_base_unsigned(u, BASE_D, print);
}
