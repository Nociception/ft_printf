/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstoutze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:22:19 by nstoutze          #+#    #+#             */
/*   Updated: 2022/11/29 18:19:33 by nstoutze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_putnbrbase(unsigned long long nb, char *base)
{
	if (nb >= 0 && nb < (unsigned long long)ft_strlen(base))
		ft_putchar(base[nb]);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbrbase(nb * -1, base);
	}
	else
	{
		ft_putnbrbase(nb / ft_strlen(base), base);
		ft_putnbrbase(nb % ft_strlen(base), base);
	}
}

void	ft_putnbr_ptr(unsigned long long nb, char *base)
{
	if (checkbase(base))
		ft_putnbrbase(nb, base);
}
