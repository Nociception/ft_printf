/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstoutze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:24:33 by nstoutze          #+#    #+#             */
/*   Updated: 2022/11/29 19:50:11 by nstoutze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	format_p(va_list arg)
{
	unsigned long long	n;
	int					addlen;

	n = va_arg(arg, unsigned long long);
	addlen = 2;
	ft_putstr("0x");
	if (!n)
	{
		ft_putchar('0');
		return (3);
	}
	ft_putnbr_ptr(n, "0123456789abcdef");
	return (ft_unslololen(n) + addlen);
}
