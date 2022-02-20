#include<unistd.h>
#include<stdio.h>

//void    ft_putchar( char c1, char c2, char c3, char c4 );

void ft_print_comb2(void)
{
    int a = 0;
    int b = 1;
    int c ;
    int *arr[2];
    arr[2] = &c ;
    while (a < 100)
    {
        while (b<100)
        {
          if (a<10)
          {
              arr[0][0]=a;
            write(1,"0",1);
              write(1,&arr[0][0],4);
              write(1," ",1);
             // printf("0%d ",a);
          }
            else
            {
                arr[0][0]=a;
                write(1,&arr[0][0],4);
                write(1," ",1);
               // printf("%d ",a);
            }
            
            if(b<10)
            {
                arr[1][0]=b;
            //  write(1,"0",1);
                write(1,&arr[1][0],4);
                write(1," ,",1);
              //  printf("0%d ,",b);
                
            }
           else
           {
               arr[1][0]=b;
             //write(1,"0",1);
               write(1,&arr[1][0],4);
               write(1," ,",1);
              // printf("%d ,",b);
           }
            
            
            b++;
        }
        a++;
        b=a+1;
        
        
    }
    
    
}
    
    
   /* while(a<='9')
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


}*/

/*void    ft_putchar( char c1, char c2, char c3, char c4 )
{
    write(1,&c1,1);
    write(1,&c2,1);
    write(1," ",1);
    write(1,&c3,1);
    write(1,&c4,1);
    write(1,", ",1);
} */
int main(){
    
    ft_print_comb2();
    }

