/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:42:28 by agondard          #+#    #+#             */
/*   Updated: 2021/10/30 16:32:09 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

/* INCLUDES */
// utilisation de va
# include <stdarg.h>
// utilisation de write
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

#define BASE_D "0123456789"
#define BASE_HEX_MAJ "0123456789ABCDEF"
#define BASE_HEX_MIN "0123456789abcdef"

/* STRUCTURE */
typedef	struct s_printf
{
	int	i;
	va_list	list;
}	t_printf;

int	ft_printf(const char *str, ...);

/* TOOLS */

int		ft_check_letter(char letter_c);
void	ft_parse_letter(const char *str, t_printf *print);
void	ft_print_c(t_printf *print);
void	ft_print_di(t_printf *print);
void	ft_print_s(t_printf *print);
void	ft_print_p(t_printf *print);
void ft_print_x_min(t_printf *print);
void ft_print_x_maj(t_printf *print);
void ft_putchar(char c, t_printf *print);
void	ft_putnbr_base(int nbr, char *base, t_printf *print);
void ft_putnbr_base_hexa(unsigned int nbr, char *base, t_printf *print);
void ft_putstr(char *str, t_printf *print);
int		len(char *str);

#endif /* FT_PRINTF_H */
