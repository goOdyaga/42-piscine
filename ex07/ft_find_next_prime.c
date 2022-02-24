/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:33:04 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/20 19:33:15 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	index;
	int	count;

	if (nb < 2)
		return (2);
	nb += 1;
	while (nb > 0)
	{
		count = 0;
		index = 2;
		while (index < nb)
		{
			if (nb % index == 0)
				count++;
			index++;
		}
		if (count == 0)
			return (nb);
		nb++;
	}
	return (0);
}
