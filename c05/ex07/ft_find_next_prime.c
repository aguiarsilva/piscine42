/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:34:48 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/12 16:15:23 by braguiar         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (nb >= 2147483647)
		{
			break ;
		}
		if (ft_is_prime(nb))
		{
			return (nb);
		}
		nb++;
	}
	return (-1);
}
/*
#include <stdio.h>

int main() {
    // Test cases for ft_find_next_prime
    int next_prime_test_cases[] = {1, 10, 20, 30, 100};
    int num_next_prime_test_cases = sizeof(next_prime_test_cases) 
    / sizeof(next_prime_test_cases[0]);

    for (int i = 0; i < num_next_prime_test_cases; i++) {
        int result = ft_find_next_prime(next_prime_test_cases[i]);
        printf("Next prime after %d is: %d\n", next_prime_test_cases[i], 
	result);
    }

    return 0;
}*/
