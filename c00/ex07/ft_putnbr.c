/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hturkeri <hturkeri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:37:14 by hturkeri          #+#    #+#             */
/*   Updated: 2023/09/04 14:37:20 by hturkeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int ab)
{
	if (ab == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		write (1, "47483648", 8);
	}
	else if (ab < 0)
	{
		ft_putchar('-');
		ft_putchar(-ab);
	}
	else if (ab > 9)
	{
		ft_putchar(ab / 10);
		ft_putchar(ab % 10);
	}
	else if (ab <= 9)
	{
		ft_putchar(ab + 48);
	}
}
