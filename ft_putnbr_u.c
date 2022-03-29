/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 22:08:02 by iomayr            #+#    #+#             */
/*   Updated: 2022/03/29 17:00:00 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_u(unsigned int h)
{
	int	s;

	s = 0;
	if (h < 10)
		s = s + ft_putchar(h + 48);
	else
	{
		s += ft_putnbr_u (h / 10);
		s += ft_putnbr_u (h % 10);
	}
	return (s);
}
