/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 01:22:28 by agondard          #+#    #+#             */
/*   Updated: 2021/11/03 13:42:29 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base, t_printf *print)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-', print);
	}
	if (n >= len(base))
		ft_putnbr_base(n / len(base), base, print);
	ft_putchar(base[n % len(base)], print);
}

void	ft_putnbr_base_unsigned(unsigned int nbr, char *base, t_printf *print)
{
	if (nbr >= len(base))
		ft_putnbr_base(nbr / len(base), base, print);
	ft_putchar(base[nbr % len(base)], print);
}

void	ft_putnbr_base_p(uintptr_t nbr, char *base, t_printf *print)
{
	if (nbr >= len(base))
		ft_putnbr_base_p(nbr / len(base), base, print);
	ft_putchar(base[nbr % len(base)], print);
}
