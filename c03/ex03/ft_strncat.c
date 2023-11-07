/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:13:36 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/06 14:28:31 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && (j < nb))
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
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char dest[100] = "Hello, ";
    char src[] = "world!";

    printf("Before strcat: dest = \"%s\"\n", dest);

    // Call your ft_strncat function to concatenate src to dest
    ft_strncat(dest, src, 3);

    printf("After strcat: dest = \"%s\"\n", dest);

    return 0;
}*/
