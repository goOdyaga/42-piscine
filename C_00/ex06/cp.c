/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:40:45 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/13 16:50:37 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar( char c1, char c2, char c3, char c4 );

void ft_print_comb2(void)
{
char a='0',b='0',c='0',d='1';

	while(a<='9')
	{
		while(b<='9')
		{
			while(c<='9')
			{
				while(d<='9')
				{
                    ft_putchar( a, b, c, d );
				d++;
				}
            c++;
            d='0';
			}
        b++;
        c=a;
        d=b+1;
		}
    a++;
    b='0';
    c=a;
    d='1';
	}


}

void    ft_putchar( char c1, char c2, char c3, char c4 )
{
    write(1,&c1,1);
    write(1,&c2,1);
    write(1," ",1);
    write(1,&c3,1);
    write(1,&c4,1);
    write(1,", ",1);
}
