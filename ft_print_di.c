/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 03:26:17 by agondard          #+#    #+#             */
/*   Updated: 2021/10/30 10:48:01 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_di(t_printf *print)
{
	int	i;

	i = va_arg(print->list, int);
	ft_putnbr_base(i, BASE_D, print);
}
