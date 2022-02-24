/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:14:43 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/20 19:14:48 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	if (nb < 2)
		return (0);
	while (index < nb)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}
