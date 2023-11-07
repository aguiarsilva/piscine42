/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:10:02 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/05 15:51:22 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "abc";
	s2 = "abcj";
	printf("%d", ft_strcmp(s1,s2));

}*/
