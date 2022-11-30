/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstoutze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:18:13 by nstoutze          #+#    #+#             */
/*   Updated: 2022/11/29 19:19:07 by nstoutze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_putnbrbase(long long nb, char *base)
{
	if (nb >= 0 && nb < (long long)ft_strlen(base))
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

void	ft_putnbr_base(long long nbr, char *base)
{
	if (checkbase(base))
		ft_putnbrbase((long long)nbr, base);
}
