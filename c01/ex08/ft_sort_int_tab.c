/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:09:52 by braguiar          #+#    #+#             */
/*   Updated: 2023/08/30 12:45:54 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = 0;
	while (a < size)
	{
		b = 0;
		while (b < size - 1)
		{
			if (tab[b] > tab[b + 1])
			{
				temp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = temp;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	int	array[9] = {9, 1, 2, 4, 7, 3, 4, 3, 0};
	ft_sort_int_tab(array, 9);
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
