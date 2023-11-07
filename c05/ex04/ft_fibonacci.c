/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:19:58 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/12 14:42:55 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int main() {
    // Test cases
    int test_cases[] = {-1, 0, 1, 2, 5, 10};
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_test_cases; i++) {
        int result = ft_fibonacci(test_cases[i]);
        if (result == -1) {
            printf("Invalid input for index: %d\n", test_cases[i]);
        } else {
            printf("Fibonacci(%d) = %d\n", test_cases[i], result);
        }
    }

    return 0;
}*/
