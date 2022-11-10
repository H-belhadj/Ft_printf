/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:33:45 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/11/05 18:05:21 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(va_list list, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(list, int));
	else if (c == 's')
		count = ft_putstr(va_arg(list, const char *));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(list, int));
	else if (c == 'p')
	{
		ft_putstr("0x");
		count = ft_adres(va_arg(list, unsigned long long)) + 2;
	}
	else if (c == 'x')
		count = ft_lowerhex(va_arg(list, unsigned int), 1);
	else if (c == 'X')
		count = ft_lowerhex(va_arg(list, unsigned int), 0);
	else if (c == 'u')
		count = ft_putnbrunsigned(va_arg(list, unsigned int));
	else if (c == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += check(list, str[i]);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end (list);
	return (count);
}
