#include <stdio.h>
#include <unistd.h>
int hasboard[10][10];
int ft_ten_queens_puzzle(void);
void next_queen(int (*board)[10], int y, int x, char queen);
void yazdirdahta(int (*board)[10]);
void arraykopy(int (*source)[10], int (*destination)[10]);
void one_board(int (*board)[10], int y, int x);
int main()
{
	ft_ten_queens_puzzle();
	return (0);
}
int ft_ten_queens_puzzle(void)
{
	int r;
	int c;
	char queen=0;
	
	r = 0;
	c = 0;
	while (++r < 10)
		hasboard[r / 10][r % 10] = 0;
	r=0;
	c=0;
	next_queen( hasboard, r, c, queen);
	return (0);
	
}
void one_board(int (*board)[10], int y, int x)
{
	int r ;
	int c;
	
	r=0;
	c=0;
	while(r<10)
	{
		c = 0;
		while(c<10)
		{
			if ((!(c==x && r==y)) && ( y==r || x==c
			 || (((float)(r-y))/(c-x)==1) || (((float)(r-y))/(c-x)==-1) )
			 && board[r][c] != 2)
			{
				board[r][c]=1;
			}
			c++;
		}
		r++;
	}
}
void next_queen(int (*board)[10], int x, int y, char queen)
{
	int r;
	int c;
	 int a =0;
	int b;
	int nextboard[10][10];

	if(queen == 9)
	{
		r = 0;
		c = 0;
		while(r<10)
		{
			while(c<10)
			{
				if (board[r][c] == 0)
					board[r][c] = 2;
				c++;
			}
			c = 0;
			r++;
		}
		yazdirdahta( board);
		printf("\n");
	}
	arraykopy(board, nextboard);
	
	r = x;
	c = y;
	while(r<10)
	{
		while(c<10)
		{
			if (nextboard[r][c] ==0)
			{
						if(!(c==9&&r==9))
						{
							a=c+1;
							b=r;
							if(a==10&&b<9)
							{
								a=0;
								b+= 1;
						}
					next_queen(nextboard,b,a,queen);
					queen++;
					nextboard[r][c] = 2;
					one_board(nextboard, r, c);
				}
			}
			c++;
		}
		c = 0;
		r++;
	}
}
void yazdirdahta(int (*board)[10])
{
	int c;
	int r;
	
	r=0;
	c=0;
	while(r<10)
	{
			c = 0;
			while(c<10)
			{
				if (board[c][r] == 2)
				{
					printf("%d ",c);
				}
			c++;
		}
		
			r++;
	}
}
void arraykopy(int (*source)[10], int (*destination)[10])
{
	int i;
	int o;
	
	i = -1;
	o = -1;
	while (++i < 10)
	{
		o = -1;
		while (++o < 10)
			destination[i][o] = source[i][o];
	}
}

