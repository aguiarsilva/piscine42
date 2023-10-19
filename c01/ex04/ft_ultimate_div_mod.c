/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:37:35 by braguiar          #+#    #+#             */
/*   Updated: 2023/08/30 10:53:24 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num;
	int	num1;

	num = *a;
	num1 = *b;
	*a = num / num1;
	*b = num % num1;
}
/*
int   main(void)
{
        int a;
        int b;

        a = 7;
        b = 2;
        ft_ultimate_div_mod(&a, &b);
        printf("a value is: %d\n", a);
        printf("b value is: %d\n", b);
        return (0);
}*/
