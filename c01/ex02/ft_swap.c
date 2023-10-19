/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:41:07 by braguiar          #+#    #+#             */
/*   Updated: 2023/08/30 11:36:50 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int     main(void)
{
        int     a;
        int     b;

        a = 3;
        b = 7;
        ft_swap(&a, &b);
        printf("%d", a);
        printf("%d", b);
        return (0);
}
*/
