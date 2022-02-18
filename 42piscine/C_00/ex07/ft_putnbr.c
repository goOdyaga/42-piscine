/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:58:16 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/13 17:50:58 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		power(int pwr, int size);

int		str_count(int nmb, int count);

void	ft_putnbr(int nb)
{
	int	c;
	int	result2;
	int	nb2;
	int	d;
	int	power1;

	nb2 = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	c = str_count(nb, 1);
	result2 = 1;
	while (c)
	{
		d = c - 1;
		power1 = power(1, d);
		result2 = (nb / power1) % 10 + 48;
		write(1, &result2, 1);
		c--;
	}
}

int	main(void)
{
	ft_putnbr(-2454675);
	return (0);
}

int	power(int pwr, int size)
{
	while (size)
	{
		pwr *= 10;
		size--;
	}
	return (pwr);
}

int	str_count(int nmb, int count)
{
	int	c;

	c = 0;
	while (count)
	{
		if (nmb != 0)
			c++;
		nmb /= 10;
		if (nmb == 0)
			count = 0;
	}
	return (c);
}
