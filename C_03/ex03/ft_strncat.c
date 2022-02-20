/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>     +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:21:37 by root              #+#    #+#             */
/*   Updated: 2022/02/17 18:24:58 by root             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	count;

	count = 0;
	index = 0;
	while (src[count] != 0)
		count++;
	if (count != 0)
	{
		while (index < nb)
		{
			dest[count + index] = src[index];
			index++;
		}
		dest[index + count] = 0;
	}
	return (dest);
}
