/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:23:03 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/12 15:09:05 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (nb == i)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
    // Test cases
    int test_cases[] = {2, 3, 5, 7, 9, 16, 17, 23, 25, 29};
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_test_cases; i++) {
        int result = ft_is_prime(test_cases[i]);
        printf("%d is prime: %s\n", test_cases[i], result ? "Yes" : "No");
    }

    return 0;
}*/
