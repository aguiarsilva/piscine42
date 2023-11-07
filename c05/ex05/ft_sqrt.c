/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:22:05 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/12 14:55:56 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	while ((i <= nb / 2) && (i <= 46341))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
    // Test cases
    int test_cases[] = {0, 1, 4, 9, 16, 25, 30, 100, 46341, 46342};
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_test_cases; i++) {
        int result = ft_sqrt(test_cases[i]);
        printf("Square root of %d = %d\n", test_cases[i], result);
    }

    return 0;
}*/
