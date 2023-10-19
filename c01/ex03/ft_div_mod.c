/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braguiar <braguiar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:23:12 by braguiar          #+#    #+#             */
/*   Updated: 2023/08/30 11:38:27 by braguiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int     main(void)
{
        int     div;
        int     mod;

        div = 0;
        mod = 0;
        ft_div_mod(7, 2, &div, &mod);
        printf("%d", div);
        printf("%d", mod);
        return (0);
}
*/
