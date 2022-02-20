/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:13:52 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/18 21:14:39 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num;
	int	index;
	int	s;

	index = 0;
	s = 1;
	num = 0;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			s *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		num = (str[index] - 48) + (num * 10);
		index++;
	}
	return (s * num);
}
