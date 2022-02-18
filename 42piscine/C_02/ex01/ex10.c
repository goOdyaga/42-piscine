/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imp2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:49:38 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/14 18:26:27 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		strl(char *count);

char	ft_strcp(char *string1, char *string2, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	l_d;
	int	l_s;

	i = 0;
	l_d = strl(dest);
	l_s = strl(src);
	if (l_s >= n && (l_d <= l_s || l_d > l_s))
	{
		ft_strcp(dest, src, n);
		if (l_d <= l_s)
			dest[n] = '\0';
	}
	if (l_s < n)
	{
		while (i < n)
		{
			if (i < l_s)
				dest[i] = src[i];
			else
				dest[i] = '\0';
			i++;
		}
	}
}

int	strl(char *count)
{
	int	i;

	i = 0;
	while (count[i] != '\0')
		i++;
	return (i);
}

char	ft_strcp(char *string1, char *string2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		string1[i] = string2[i];
		i++;
	}
}
int main(){
char source[]="QGEWF";
char dest[]="wDA";
ft_strncpy(dest,source,5);
printf("%c\n",dest[0]);
printf("%c\n",dest[1]);
printf("%c\n",dest[2]);
printf("%c\n",dest[3]);
printf("%c\n",dest[4]);
printf("%c\n",dest[5]);

}