/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:23:32 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/11/05 18:38:06 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putstr(const char *s);
int		ft_putchar(char c);
int		ft_lowerhex(unsigned int num, int islower);
int		ft_adres(unsigned long long c);
int		ft_putnbr(int n);
int		ft_putnbrunsigned(unsigned int n);
int		ft_printf(const char *str, ...);

#endif
