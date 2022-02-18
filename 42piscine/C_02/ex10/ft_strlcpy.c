/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:56:45 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/15 13:57:10 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (src[i] != '\0')
		count++;
	if (n != 0)
	{
		while (src[i] != '\0' && i < n - 1)
		{
			dest[i] = src[i] i++;
		}
		dest[i] = 0;
	}
	return (count);
}
