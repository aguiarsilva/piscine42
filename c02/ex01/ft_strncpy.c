/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:15:54 by braguiar          #+#    #+#             */
/*   Updated: 2023/08/31 11:31:40 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char str1[] = "Jambalaya";
	char str3[] = "Jambalaya";
	char str2[] = "Gaucho";
	int  size = 5;

	printf("%s\n", str1);   // str1 is before ft_strcpy is used on it
	ft_strncpy(str1, str2, size);  // call functtion ft_st
	strncpy(str3, str2, size);  // call functtion ft_st
	printf("%s\n", str3);   // str1 is before ft_strcpy is used on it
	printf("%s\n", str1);  // str1 should now become str2
	return (0);
}*/
