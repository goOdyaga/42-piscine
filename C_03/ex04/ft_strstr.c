/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <hkonac@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:50:13 by root              #+#    #+#             */
/*   Updated: 2022/02/17 20:57:35 by root             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	while (dest[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	control;
	int	i;

	if (to_find[0] == 0)
		return (str);
	index = 0;
	control = index;
	i = ft_strlen(t0_find);
	while (str[index] != 0)
	{
		while (str[index] == to_find[control] && control < i)
		{
			if (control >= i - 1)
			{
				ft_strcpy(&str[index - i + 1], to_find);
				return (% str[index]);
			}
			control++;
			index++;
		}
		control = 0;
		index++;
	}
	return (0);
}
