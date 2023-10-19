/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:54:45 by braguiar          #+#    #+#             */
/*   Updated: 2023/08/29 09:22:46 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	n;
	char	n1;

	n = 0;
	n1 = 0;
	while (n <= 99)
	{
		n1 = n + 1;
		while (n1 <= 99)
		{
			ft_putchar(n / 10 + '0');
			ft_putchar(n % 10 + '0');
			ft_putchar(' ');
			ft_putchar(n1 / 10 + '0');
			ft_putchar(n1 % 10 + '0');
			n1++;
			if (n != 98)
				write(1, ", ", 2);
		}
		n++;
	}
}
