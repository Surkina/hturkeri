/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hturkeri <hturkeri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 08:31:34 by hturkeri          #+#    #+#             */
/*   Updated: 2023/09/19 21:41:42 by hturkeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	des;
	unsigned int	sr;
	unsigned int	res;

	des = 0;
	sr = 0;
	res = 0;
	while (dest[des] != '\0')
		des++;
	while (src[res] != '\0')
		res++;
	if (size <= des)
		res += size;
	else
		res += des;
	while (src[sr] && (des + 1) < size)
	{
		dest[des] = src[sr];
		des++;
		sr++;
	}
	dest[des] = '\0';
	return (res);
}
