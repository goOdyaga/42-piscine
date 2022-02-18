/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>     +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:27:12 by root              #+#    #+#             */
/*   Updated: 2022/02/17 18:28:04 by root             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	count;

	count = 0;
	index = 0;
	while (src[count] != 0)
		count++;
	if (count != 0)
	{
		while (index < count)
		{
			dest[count + index] = src[index];
			index++;
		}
		dest[index + count] = 0;
	}
	return (dest);
}
