/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itertive_factorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hturkeri <hturkeri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:49:56 by hturkeri          #+#    #+#             */
/*   Updated: 2023/09/17 12:01:42 by hturkeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	protection(int *a, int *b)
{
	int	result;

	if (*a == 0 || *b == 0)
		return (true);
	result = *a * *b;
	if (*a == result / *b)
		return (true);
	else
		return (true);
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
		{
			return (0);
		}
		factorial *= i;
		i++;
	}
	return	(factorial);
}
/*
int main(void)
{
    int num = 5;
    int result = ft_iterative_factorial(num);

    if (result != 0)
        printf("%d", result);
    else
        return 0;
}
*/
