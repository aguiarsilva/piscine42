/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:15:51 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/12 14:21:05 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb)
		res *= nb--;
	return (res);
}
/*
#include <stdio.h>

int main() {
    // Test cases
    int test_cases[] = {0, 5, -1};
    int expected_results[] = {1, 120, 0};
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_test_cases; i++) {
        int result = ft_iterative_factorial(test_cases[i]);
        printf("Test case %d: %s\n", i + 1, 
	result == expected_results[i] ? "Passed" : "Failed");
    }

    return 0;
}*/
