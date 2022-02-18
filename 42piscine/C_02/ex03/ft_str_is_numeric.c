/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:00:11 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/15 16:45:36 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (str[index] < 48 || str[index] > 57)
			count++;
		index++;
	}
	if (count == 0)
		return (1);
	return (0);
}
