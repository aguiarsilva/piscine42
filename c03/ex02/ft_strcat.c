/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:53:18 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/07 14:26:46 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

// Prototype of the strcat function
char	*ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[100] = "Hello, ";
    char src[] = "world!";

    printf("Before strcat: dest = \"%s\"\n", dest);

    // Call your ft_strcat function to concatenate src to dest
    ft_strcat(dest, src);

    printf("After strcat: dest = \"%s\"\n", dest);

    return 0;
}*/
