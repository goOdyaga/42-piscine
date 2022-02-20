/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:20:43 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/13 14:24:51 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c1, char c2);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		while (b < 100)
		{
			ft_putchar(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

void	ft_putchar(char c1, char c2)
{
	int	arr[];

	arr[] = {0, 0, 0, 1};
	arr[0] = (c1 % 10) + 48;
	arr[1] = (c1 / 10) + 48;
	arr[2] = (c2 % 10) + 48;
	arr[3] = (c2 / 10) + 48;
	write(1, &arr[1], 1);
	write(1, &arr[0], 1);
	write(1, " ", 1);
	write(1, &arr[3], 1);
	write(1, &arr[2], 1);
	if ((c1 == 98 && c2 == 99) != 1)
		write(1, ", ", 2);
}
