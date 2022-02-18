/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:10:47 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/16 20:11:17 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_conver_to_hex(char c);

void	ft_convert_to_hex(char c)
{
	char	a;
	char	d;
	char	b;

	a = 'W';
	d = c / 16 + 48;
	b = c % 16;
	if (b < 10)
		b += 48;
	else
		b += a;
	write(1, "\\", 2);
	write(1, &d, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32))
		{
			ft_convert_to_hex(str[i]);
			i++;
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
