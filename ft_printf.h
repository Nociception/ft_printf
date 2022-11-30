/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstoutze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:45:59 by nstoutze          #+#    #+#             */
/*   Updated: 2022/11/30 12:26:30 by nstoutze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

int			checkbase(char *base);
int			format_c(va_list arg);
int			format_di(va_list arg);
int			format_p(va_list arg);
int			format_s(va_list arg);
int			format_u(va_list arg);
int			format_pc(void);
int			format_x(va_list arg);
int			format_upx(va_list arg);
int			ft_intlen(long long n, char c);
void		ft_putchar(char c);
void		ft_putnbr_base(long long nbr, char *base);
void		ft_putnbr_ptr(unsigned long long nb, char *base);
void		ft_putstr(const char *s);
long int	ft_strlen(char *str);
int			ft_printf(const char *s, ...);
int			ft_unslololen(unsigned long long n);

#endif
