/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:05:21 by braguiar          #+#    #+#             */
/*   Updated: 2023/09/11 14:44:29 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i]) && (s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(char **tx, int argc)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(tx[j], tx[i]) < 0)
			{
				tmp = tx[j];
				tx[j] = tx [i];
				tx[i] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	ft_sort(argv, argc);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
