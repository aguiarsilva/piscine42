/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:20:48 by braguiar          #+#    #+#             */
/*   Updated: 2023/08/30 12:04:30 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	b;
	int	e;
	int	temp;

	b = 0;
	e = size - 1;
	while (b < e)
	{
		temp = tab[b];
		tab[b] = tab[e];
		tab[e] = temp;
		b++;
		e--;
	}
}
/*
int     main(void)
{
        int     array[] = {4, 6, 8, 0, 1, 3, 5, 7, 9};

        ft_rev_int_tab(array, 9);
        printf("%d", array[0]);
        printf("%d", array[1]);
        printf("%d", array[2]);
        printf("%d", array[3]);
        printf("%d", array[4]);
        printf("%d", array[5]);
        printf("%d", array[6]);
        printf("%d", array[7]);
        printf("%d", array[8]);
        return (0);
}
*/
