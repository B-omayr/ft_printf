/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:02:30 by iomayr            #+#    #+#             */
/*   Updated: 2022/03/29 17:00:43 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_find(va_list ptr, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(ptr, int));
	if (c == 's')
		len = len + ft_putstr(va_arg(ptr, char *));
	if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(ptr, int));
	if (c == '%')
		len += ft_putchar('%');
	if (c == 'p')
		len += ft_ppvoid(va_arg(ptr, unsigned long int));
	if (c == 'u')
		len += ft_putnbr_u(va_arg(ptr, unsigned int ));
	if (c == 'x')
		len += ft_hexadicimal(va_arg(ptr, int));
	if (c == 'X')
		len += ft_Hexaadicimal(va_arg(ptr, int));
	return (len);
}
