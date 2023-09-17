/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hturkeri <hturkeri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:49:56 by hturkeri          #+#    #+#             */
/*   Updated: 2023/09/17 14:40:12 by hturkeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	protection(int *a, int *b)
{
	int	result;

	if (*a == 0 || *b == 0)
		return (1);
	result = a * b;
	if (*a == result / *b)
		return (1);
	else
		return (0);
}

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	i = 1;
	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		if (!protection(&factorial, &i))
			return (0);
		if (factorial == nb)
			return	i;
		factorial *= i + 1;
		i++;
	}
	return	(factorial);
}
/*
i
,nt main(void)
{
    int num = 5;
    int result = ft_iterative_factorial(num);

    if (result != 0)
        printf("%d", result);
    else
        return 0;
}
*/
