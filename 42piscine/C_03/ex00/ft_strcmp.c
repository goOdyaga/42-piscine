/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>     +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:02:33 by root              #+#    #+#             */
/*   Updated: 2022/02/17 18:25:58 by root             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	count;

	count = 0;
	index = 0;
	while (s1[count] != 0)
		count++;
	while (index <= count)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
