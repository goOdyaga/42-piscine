/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:07:10 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/19 16:08:39 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb, int size)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < size)
	{
		write(1, &"0123456789abcdef"[nb % size], 1);
		return ;
	}
	else
		ft_putnbr(nb / size, size);
	ft_putnbr(nb % size, size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	index;
	int	sign;
	int	count;

	index = 0;
	count = 0;
	sign = 0;
	while (base[index] != 0)
	{
		if (base[index] == '+' || base[index] == '-')
			sign++;
		if (base[index] == base[index + 1])
			count++;
		index++;
	}
	if (sign == 0 && count == 0 && index > 1)
		ft_putnbr(nbr, index);
}
