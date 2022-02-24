/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 08:32:32 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/20 08:32:46 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		if (nb > 1)
			return (nb * ft_recursive_factorial(nb - 1));
		else
			return (nb);
	}
	else
		return (0);
}
