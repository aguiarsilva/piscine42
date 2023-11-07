/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:25:46 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/06 12:19:51 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	i = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (d_len >= size)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && i < size - d_len - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
/*
int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 20;

    printf("Before ft_strlcat: dest = \"%s\"\n", dest);

    // Call your ft_strlcat function to concatenate src to dest
    unsigned int result = ft_strlcat(dest, src, size);

    printf("After ft_strlcat: dest = \"%s\"\n", dest);
    printf("Total length after ft_strlcat: %u\n", result);

    return 0;
}*/
