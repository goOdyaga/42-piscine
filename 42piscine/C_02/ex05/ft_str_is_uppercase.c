/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:00:28 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/15 17:01:00 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			c++;
		i++;
	}
	if (c == 0)
		return (1);
	return (0);
}
