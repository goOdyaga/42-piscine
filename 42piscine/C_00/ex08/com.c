/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonac <hkonac@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:00:54 by hkonac            #+#    #+#             */
/*   Updated: 2022/02/13 03:00:59 by hkonac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
void ft_print_comb(int n);
void print(int number , int size );
void choose(int number , int size1,int power);

int main()
{
    ft_print_comb(4);
    return 0 ;
}

void ft_print_comb(int n)
{
int a = 1;
int b = 1;
int i = 0;
int j = 1;
int d =1;
int c =0;

while(j<=n) 
{
	d *= 10 ;
	//choose((d/10),j,d);
	
	i=j;		
	
	printf("%d ",b);
	printf("%d\n",d);
		while(b<d)
		{
			if(j==3) 
			{
			choose(b,j,d);
			
			i+=1;
			}
			//b++;
			b=d;
			//printf("%d\n",b);
		}
		
		
	j++;	

}

}
void print(int number , int size )
{
int arr[size];
int i = 0;
int j =0 ;
while(i<size)
{	while(j<size)
	{
	arr[size-j-1]=number%10+48;
	number/=10;
	j++;
	}
write(1,&arr[i],1);
i++;


}
write(1," ,",1);	
}

void choose(int number , int size1,int power)
{
int i  ,j=0,add=0,new_power,first,add1;
new_power=power/10;
//printf("%d\n",power);
//printf("%d\n",number);
//printf("%d\n",size1);
while(j<size1) 
{
add+=new_power;
new_power/=10;
j++;
}
//printf("%d\n",add);
add1=add;
j=1;
first= add;
while(number>=(power/10)&&number<power)
{
//printf("2:%d\n",number);

	if((number%(power/10))==0)
	{
	printf("1:%d\n",number);
		if(number==(power/10))
		{
			while(j<size1)
			{
			 first += (add1/10);
			 add1/=10;
			 j++; 
			  printf("2:%d\n",first);
			 }
			 number+=first;
			 i=number;
			 printf("3:%d\n",first);
			 j=1;
		}
		else 
		{
		printf("5:%d\n",add);
		number+=add*j+i;
		printf("4:%d\n",number);
		printf("6:%d\n",j);
		j++;
		}
	 }
	// printf("%d",number)
//print(number,size1);
number ++;
}



}






















