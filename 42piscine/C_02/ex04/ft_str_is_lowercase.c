/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:49:05 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/15 16:49:33 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			c++;
		i++;
	}
	if (c == 0)
		return (1);
	return (0);
}
