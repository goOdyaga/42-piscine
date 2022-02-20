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
void ft_print_comb(int n);

int main()
{
	
    ft_print_comb(9);
    return 0 ;

}

void ft_print_comb(int n)
{
char a='0',b='1',c='2',d='3',e='4',f='5',g='6',h='7',k='8',l='9' ;

    if(n==1)
	{
        while(a<='0')
        {
            while(b<='9')
            {
                write(1,&a,1);
                write(1,&b,1);
               // write(1,&c,1);
                write(1,", ",1);

            b++;

            }
        a++;
        b=a+1;
        }
	}
    if(n==2)
	{
        while(a<='9')
        {
            while(b<='9')
            {
                write(1,&a,1);
                write(1,&b,1);
               // write(1,&c,1);
                write(1,", ",1);

            b++;

            }
        a++;
        b=a+1;
        }
	}
	
	if(n==3)
	{
		    while(a<='9')
    {
        while(b<='9')
        {
            while(c<='9')
            {
                write(1,&a,1);
                write(1,&b,1);
                write(1,&c,1);
                write(1,", ",1);
            c++;
            }
        b++;
        c=b+1;
        }
        a++;
        b=a+1;
        c=b+1;
    }


    }
	if(n==4)
	{
      while(a<='9')
    {
        while(b<='9')
        {
            while(c<='9')
            {
				while(d<='9')
				{
            	    write(1,&a,1);
             		   write(1,&b,1);
             	    	 write(1,&c,1);
						 write(1,&d,1);
                	  write(1,", ",1);

            d++;
				}
				c++;
				d=c+1;

            }
        b++; 
		c=b+1;
		d=c+1;
		}
        a++;
        b=a+1;
        c=b+1;
		d=c+1;
    }
  
	}
    if(n==5)

	{  
    while(a<='9')
    {
        while(b<='9')
        {
            while(c<='9')
            {
					while(d<='9')
					{
						while(e<='9')
						{

              			 write(1,&a,1);
            		     write(1,&b,1);
               			 write(1,&c,1);
						 write(1,&d,1);
						 write(1,&e,1);
               			 write(1,", ",1);
							e++;
            			}
						d++;
						e=d+1;

					}
					c++;
					d=c+1;
					e=d+1;

            }
			
        b++;
        c=b+1;
		d=c+1;
		e=d+1;
        }

        a++;
        b=a+1;
        c=b+1;
		d=c+1;
		e=d+1;
    }

	}
	 if(n==6)
	{
  while(a<='9')
    {
        while(b<='9')
        {
            while(c<='9')
            {
				while(d<='9')
				{
					while(e<='9')
					{
						while(f<='9')
						{
               					 write(1,&a,1);
               					 write(1,&b,1);
               					 write(1,&c,1);
								 write(1,&d,1);
								 write(1,&e,1);
								 write(1,&f,1);
                				write(1,", ",1);
								f++;
						}
						e++;
						f=e+1;
					}		
					d++;
					e=d+1;
					f=e+1;
				}
				c++;
				d=c+1;
				e=d+1;
				f=e+1;
          

            }

        b++;
        c=b+1;
		d=c+1;
		e=d+1;
		f=e+1;

        }
        a++;
        b=a+1;
        c=b+1;
		d=e+1;
		e=f+1;
		f=e+1;

    }

	}
    if(n==7)
        while(a<='9')
          {
              while(b<='9')
              {
                  while(c<='9')
                  {
                      while(d<='9')
                      {
                          while(e<='9')
                          {
                              while(f<='9')
                              {
                                  while(g<='9')
                                  {
                                          write(1,&a,1);
                                          write(1,&b,1);
                                          write(1,&c,1);
                                       write(1,&d,1);
                                       write(1,&e,1);
                                       write(1,&f,1);
                                      write(1,&g,1);
                                      write(1,", ",1);
                                      g++;
                                  }
                                  f++;
                                  g=f+1;
                              }
                              e++;
                              f=e+1;
                              g=f+1;
                           
                          }
                          d++;
                          e=d+1;
                          f=e+1;
                          g=f+1;
                      }
                      c++;
                      d=c+1;
                      e=d+1;
                      f=e+1;
                      g=f+1;
                  }
                  b++;
                  c=b+1;
                  d=c+1;
                  e=d+1;
                  f=e+1;
                  g=f+1;
              }
              a++;
              b=a+1;
              c=b+1;
              d=c+1;
              e=d+1;
              f=e+1;
              g=f+1;
          }
    if(n==8)
	{
        while(a<='9')
          {
              while(b<='9')
              {
                  while(c<='9')
                  {
                      while(d<='9')
                      {
                          while(e<='9')
                          {
                              while(f<='9')
                              {
                                  while(g<='9')
                                  {
                                      while(h<='9')
                                      {
                                          write(1,&a,1);
                                          write(1,&b,1);
                                          write(1,&c,1);
                                          write(1,&d,1);
                                          write(1,&e,1);
                                          write(1,&f,1);
                                          write(1,&g,1);
                                          write(1,&h,1);
                                          write(1,", ",1);
                                          h++;
                                      }
                                      g++;
                                      h=g+1;
                                  }
                                  f++;
                                  g=f+1;
                                  h=g+1;
                              }
                              e++;
                              f=e+1;
                              g=f+1;
                              h=g+1;
                          }
                          d++;
                          e=d+1;
                          f=e+1;
                          g=f+1;
                          h=g+1;
                      }
                      c++;
                      d=c+1;
                      e=d+1;
                      f=e+1;
                      g=f+1;
                      h=g+1;
        
                  }
                  b++;
                  c=b+1;
                  d=c+1;
                  e=d+1;
                  f=e+1;
                  g=f+1;
                  h=g+1;
              }
              a++;
              b=a+1;
              c=b+1;
              d=c+1;
              e=d+1;
              f=e+1;
              g=f+1;
              h=g+1;
              
          }
	
	}
    if(n==9)
	{
        while(a<='9')
          {
              while(b<='9')
              {
                  while(c<='9')
                  {
                      while(d<='9')
                      {
                          while(e<='9')
                          {
                              while(f<='9')
                              {
                                  while(g<='9')
                                  {
                                      while(h<='9')
                                      {
                                          while(l<='9')
                                          {
                                          write(1,&a,1);
                                          write(1,&b,1);
                                          write(1,&c,1);
                                          write(1,&d,1);
                                          write(1,&e,1);
                                          write(1,&f,1);
                                              write(1,&g,1);
                                              write(1,&h,1);
                                              write(1,&l,1);
                                          write(1,", ",1);
                                              l++;
                                              
                                          }
                                          h++;
                                          l=h+1;
                                      }
                                      g++;
                                      h=g+1;
                                      l=h+1;
                                  }
                                  f++;
                                  g=f+1;
                                  h=g+1;
                                  l=h+1;
                              }
                              e++;
                              f=e+1;
                              g=f+1;
                              h=g+1;
                              l=h+1;
                          }
                          d++;
                          e=d+1;
                          f=e+1;
                          g=f+1;
                          h=g+1;
                          l=h+1;
                      }
                      c++;
                      d=c+1;
                      e=d+1;
                      f=e+1;
                      g=f+1;
                      h=g+1;
                      l=h+1;
                      
                  }
                  b++;
                  c=b+1;
                  d=c+1;
                  e=d+1;
                  f=e+1;
                  g=f+1;
                  h=g+1;
                  l=h+1;
              }
              a++;
              b=a+1;
              c=b+1;
              d=c+1;
              e=d+1;
              f=e+1;
              g=f+1;
              h=g+1;
              l=h+1;
              
          }
        
	
	}

}






