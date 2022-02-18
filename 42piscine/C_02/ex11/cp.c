
#include <unistd.h>

void  ft_putstr_non_printable(char *str);

void  ft_conver_to_hex(char c);

int  main(void)
{
  char a[22]="Coucop\ttu \nvas bien ?";
  a[3] = 24;
  ft_putstr_non_printable(a);
}

void  ft_convert_to_hex(char c)
{
  char a;
  char d;
    char b;
 
    a = 'W';
  d=c/16+48;
  b=c%16;
  if(b<10)
    b+=48;
  else
  b+=a;
  write(1,"\\",2);
  write(1,&d,1);
  write(1,&b,1);
}
void  ft_putstr_non_printable(char  *str)
{
  int i;
  i = 0;
  while (str[i] != '\0' )
  {
    if((str[i] < 32))
    {
      ft_convert_to_hex(str[i]);
      i++;
    }
      else
          write(1,&str[i],1);
    i++;
  }
}
