/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:15:13 by agondard          #+#    #+#             */
/*   Updated: 2021/10/30 16:32:55 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x_min(t_printf *print)
{
	unsigned int	x;

	x = va_arg(print->list, unsigned int);
	ft_putnbr_base_hexa(x, BASE_HEX_MIN, print);
}

void	ft_print_x_maj(t_printf *print)
{
	unsigned int	x;

	x = va_arg(print->list, unsigned int);
	ft_putnbr_base_hexa(x, BASE_HEX_MAJ, print);
}
