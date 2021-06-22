#include <stdio.h>

int main(void) {
	long long int test;
	scanf("%lld",&test);
	while(test--)
	{
	    int first,second,both,fir,sec;
	    char board[3][3];
	    first=second=both=fir=sec=0;
	    int i,j;
	    for(i=0;i<3;i++)
	    {
	        
	           scanf("%s",&board[i][0]);
	        
	    }
	  /*  for(i=0;i<3;i++)
	    {
	        for(j=0;j<3;j++)
	        {
	            printf("%c ",board[i][j]);
	        }
	        printf("\n");
	    }
	    printf("\n");*/
	    
	    for(i=0;i<3;i++)
	    {
	        for(j=0;j<3;j++)
	        {
	            if(board[i][j]=='X')
	            first++;
	          else if(board[i][j]=='O')
	            second++;
	            else
	            both++;
	        }
	    }
	    
	    if(board[0][2]=='O'&&  board[0][0]=='O'&&  board[0][1]=='O')
	    sec=1;
	    if(board[0][2]=='X'&&  board[0][0]=='X'&&  board[0][1]=='X')
	    fir=1;
	    if(board[2][1]=='O'&&  board[0][1]=='O'&&  board[1][1]=='O')
	    sec=1;
	    if(board[2][1]=='X'&&  board[0][1]=='X'&&  board[1][1]=='X')
	    fir=1;
	    if(board[2][2]=='O'&&  board[2][0]=='O'&&  board[2][1]=='O')
	    sec=1;
	    if(board[2][2]=='X'&&  board[2][0]=='X'&&  board[2][1]=='X')
	    fir=1;
	    if(board[2][0]=='O'&&  board[0][0]=='O'&&  board[1][0]=='O')
	    sec=1;
	    if(board[2][0]=='X'&&  board[0][0]=='X'&&  board[1][0]=='X')
	    fir=1;
	    if(board[2][2]=='O'&&  board[0][0]=='O'&&  board[1][1]=='O')
	    sec=1;
	    if(board[2][2]=='X'&&  board[0][0]=='X'&&  board[1][1]=='X')
	    fir=1;
	    if(board[1][2]=='O'&&  board[1][0]=='O'&&  board[1][1]=='O')
	    sec=1;
	    if(board[1][2]=='X'&&  board[1][0]=='X'&&  board[1][1]=='X')
	    fir=1;
	    if(board[2][2]=='O'&&  board[0][2]=='O'&&  board[1][2]=='O')
	    sec=1;
	    if(board[2][2]=='X'&&  board[0][2]=='X'&&  board[1][2]=='X')
	    fir=1;
	    if(board[2][0]=='O'&&  board[0][2]=='O'&&  board[1][1]=='O')
	    sec=1;
	    if(board[2][0]=='X'&&  board[0][2]=='X'&&  board[1][1]=='X')
	    fir=1;
	    
	   // printf("%d %d ",fir,sec);
	    
	    if((fir==1&&sec==1)||(first-second)<0||(first-second)>1)
	    printf("3\n");
	    else if(!first&&both==9&&!second)
	    printf("2\n");
	    else if(!sec&&(0>second-first)&&fir)
	    printf("1\n");
	    else if(!fir&&(second-first==0)&&sec)
	    printf("1\n");
	    else if(!fir&&!both&&!sec)
	    printf("1\n");
	    else if(!fir&&both>0&&!sec)
	    printf("2\n");
	    else
	    printf("3\n");
	    
	}
}

