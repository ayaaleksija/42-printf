/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 01:22:28 by agondard          #+#    #+#             */
/*   Updated: 2021/11/08 15:03:39 by agondard         ###   ########.fr       */
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
	unsigned long	size;

	size = len(base);
	if (nbr >= size)
		ft_putnbr_base(nbr / size, base, print);
	ft_putchar(base[nbr % size], print);
}

void	ft_putnbr_base_p(uintptr_t nbr, char *base, t_printf *print)
{
	uintptr_t	size;

	size = len(base);
	if (nbr >= size)
		ft_putnbr_base_p(nbr / size, base, print);
	ft_putchar(base[nbr % size], print);
}
