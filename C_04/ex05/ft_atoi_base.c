/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:12:06 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/19 22:45:08 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	g_copy[23];
int		g_s;
char	*g_cp;
int		g_sign1;
int		g_count1;
int		g_number1;
int		g_index1;

int	to_hex(char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (str[i] != 0)
	{
		if (str[i] < '9')
		{
			number = number * 16 + (str[i] - 48);
		}
		else if ((str[i] >= 'a' && str[i] <= 'f')
			|| (str[i] >= 'A' && str[i] <= 'W'))
		{
			if (str[i] >= 'A' && str[i] <= 'W')
				number = number * 16 + (str[i] - 55);
			else
				number = number * 16 + (str[i] - 'W');
		}
		i++;
	}
	return (number);
}

int	to_octal(int size, char *to_change)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (to_change[i] != 0)
	{
		if (to_change[i] < (size + 48))
		{
			number = number * size + (to_change[i] - 48);
		}
		i++;
	}
	return (number);
}

int	sign(char *str, int *num, int index)
{
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			*num *= -1;
		index++;
	}
	return (index);
}

char	*ft_atoi(char *str)
{
	int		count;
	int		i;
	char	*arr;

	g_s = 1;
	i = 0;
	count = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	i = sign(str, &g_s, i);
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f')
		|| (str[i] >= 'A' && str[i] <= 'F'))
	{
		g_copy[count] = str[i];
		i++;
		count++;
	}
	arr = g_copy;
	return (arr);
}

int	ft_atoi_base(char *str, char *base)
{
	g_index1 = 0;
	g_count1 = 0;
	g_sign1 = 0;
	g_cp = ft_atoi(str);
	while (base[g_index1] != 0)
	{
		if (base[g_index1] == '+' || base[g_index1] == '-')
			g_sign1++;
		if (base[g_index1] == base[g_index1 + 1])
			g_count1++;
		g_index1++;
	}
	if (g_sign1 == 0 && g_count1 == 0 && g_index1 > 1)
	{
		if (g_index1 == 2)
			g_number1 = to_octal(g_index1, g_cp);
		else if (g_index1 == 8)
			g_number1 = to_octal(g_index1, g_cp);
		else if (g_index1 == 16)
			g_number1 = to_hex(g_cp);
		return (g_s * g_number1);
	}
	else
		return (0);
}
