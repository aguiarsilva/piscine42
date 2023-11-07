/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:21:07 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/06 09:58:10 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

// Prototype of the strstr function
char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[] = "This is a test string";
    char to_find[] = "test";

    printf("String: \"%s\"\n", str);
    printf("Searching for: \"%s\"\n", to_find);

    char *result = ft_strstr(str, to_find);

    printf("Substring: \"%s\"\n", result);

    return 0;
}*/
