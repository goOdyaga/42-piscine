/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:48:44 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/15 16:49:00 by hkonac           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h
>
int ft_str_is_lowercase(char *str);
	int main(){
        char str[]="srgerger";
        int a;
        a=ft_str_is_lowercase(str) +48;
        write(1,&a,1);
	
	
	
	}

int ft_str_is_lowercase(char *str)

{
    int i;
    int c;
    i=0;
    c=0;
    if (str[0] == '\0')
        return (1);
    while(str[i]!='\0')
    {
    if (str[i] < 97 || str[i] > 122)
        c++;
    i++;
    }
        if(c==0)
            return (1);
    return (0);
}
