/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:21:25 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/06 11:30:34 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	result;

	i = 0;
	s = 1;
	result = 0;
	while (((str[i] >= '\t') && (str[i] <= '\r')) || (str[i] == ' '))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * s);
}
/*
#include <stdio.h>

#include <stdlib.h>

int	main()
{
    char *test_strings[] = {
        "12345",
	"---+--+1234ab567",
        "-678",
        "   42",
        "+99",
        "  -123abc",
        "0",
        "  +0",
        "  \t\n",
        "abc123",
        "   - 123",
        NULL // NULL-terminated to indicate the end of the test cases
    };

    int expected_results[] = {
        12345,
	-1234,
        -678,
        42,
        99,
        -123,
        0,
        0,
        0,
        0, // Invalid input, should return 0
        -123, // Invalid input, should return -123
    };

    int i = 0;

    while (test_strings[i] != NULL) {
        int result = ft_atoi(test_strings[i]);
        int expected = expected_results[i];
        
        printf("Input: \"%s\"\n", test_strings[i]);
        printf("Expected result: %d\n", expected);
        printf("Actual result: %d\n", result);
        printf("Test %s\n", (result == expected) ? "passed" : "failed");
        printf("\n");

        i++;
    }

    return 0;
}*/
