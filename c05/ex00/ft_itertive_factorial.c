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

int protection(int a, int b)
{
    int result = a * b;
    if (a == 0 || b == 0)
        return 1;
    if (a == result / b)
        return 1;
    else
        return 0;
}

int ft_iterative_factorial(int nb)
{
    int factorial = 1;
    int i = 1;
    
    if (nb < 0)
        return 0;
    while (i <= nb)
    {
        if (!protection(factorial, i))
            return 0;
        factorial *= i;
        i++;
    }
    return factorial;
}

/*
int main(void)
{
    int num = 5;
    int result = ft_iterative_factorial(num);

    if (result != 0)
        printf("%d\n", result);
    else
        return 0;
}
*/
