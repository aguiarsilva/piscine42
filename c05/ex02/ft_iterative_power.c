/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:18:33 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/12 14:36:41 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if ((power == 0) && (nb == 0))
		return (1);
	while (i < power)
	{
		num *= nb;
		i++;
	}
	return (num);
}
/*
#include <stdio.h>
int main() {
    // Test cases
    int test_cases[][2] = {
        {2, 3},   // 2^3 = 8
        {5, 0},   // 5^0 = 1
        {3, 4},   // 3^4 = 81
        {4, -2},  // Invalid: power is negative
        {0, 0},   // Invalid: base and power are both 0
    };
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_test_cases; i++) {
        int result = ft_iterative_power(test_cases[i][0], test_cases[i][1]);
        printf("%d^%d = %d\n", test_cases[i][0], test_cases[i][1], result);
    }

    return 0;
}*/
