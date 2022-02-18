/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:31:26 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/16 18:37:27 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[];

	str[] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] > 96 && str[0] < 123)
			str[0] -= 32;
		while ((str[i] > 31 && str[i] < 48) || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97) || (str[i] > 122))
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;
			i++;
		}
		if (str[i + 1] > 64 && str[i + 1] < 91)
			str[i + 1] += 32;
	i++;
	}
	printf("%s", str);
	return (str);
}
