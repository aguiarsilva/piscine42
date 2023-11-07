/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:53:56 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/05 16:52:01 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((*s1 || *s2) && (i < n))
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "aasd";
	s2 = "aasdqwe";
	printf("%d", ft_strncmp(s1,s2,50));
}*/
