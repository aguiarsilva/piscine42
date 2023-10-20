/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:59:57 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/04 16:06:36 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int     main(void)
{
        char    str1[] = "HelloWorld";
        char    str2[] = "Hello, World!";
        char    str3[] = "";    
        printf("%s\n", ft_strlowcase(str1));
        printf("%s\n", ft_strlowcase(str2));
        printf("%s\n", ft_strlowcase(str3));
        return (0);
}*/
