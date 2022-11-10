/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adres.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:19:38 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/11/04 20:06:01 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_adres(unsigned long long num)
{
	int		cnt;
	char	*str;

	str = "0123456789abcdef";
	cnt = 0;
	if (num < 16)
		cnt += ft_putchar(str[num]);
	else
	{
		cnt += ft_adres(num / 16);
		cnt += ft_adres(num % 16);
	}
	return (cnt);
}
