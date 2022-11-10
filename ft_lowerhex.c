/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:14:00 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/11/04 20:07:27 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowerhex(unsigned int num, int islower)
{
	char	*str;
	int		c;

	c = 0;
	if (islower)
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	if (num >= 16)
	{
		c += ft_lowerhex(num / 16, islower);
		c += ft_lowerhex(num % 16, islower);
	}
	else
		c += ft_putchar(str[num]);
	return (c);
}
