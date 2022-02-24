/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:52:15 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/20 18:52:29 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	while (index < nb)
	{
		if (nb % index == 0 && index * index == nb)
			return (index);
		index++;
	}
	return (0);
}
