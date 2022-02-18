/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:27:09 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/15 17:27:18 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i]<127)
			c++;
		i++;
	}
	if (c == 0)
		return (0);
	return (1);
}
