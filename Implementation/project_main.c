#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char  arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int board(char num,char tat,int c)
{
	int i,j;
	int b=0;
	if(num=='1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9')
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(arr[i][j]==num)
				{
					arr[i][j]=tat;
				}
			}
		}
	}
	printf("\t\t		     |		|		\n");
	printf("\t\t		%c    |	 %c	| %c	\n",arr[0][0],arr[0][1],arr[0][2]);
    printf("\t\t	_____________|__________|_________\n");
    printf("\t\t		     |		|		\n");
    printf("\t\t		%c    |	 %c	| %c	\n",arr[1][0],arr[1][1],arr[1][2]);
    printf("\t\t\t_____________|__________|_________\n");
    printf("\t\t		     |		|		\n");
    printf("\t\t		%c    |	 %c	| %c	\n",arr[2][0],arr[2][1],arr[2][2]);
    printf("\t\t		     |		|		\n");
    if(c>2)
    {
    	if(arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='x')
    	 {
    	 	b=1;
    	 	return b;
		 }
		 else	if(arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='o')
    	 {
    	 	b=1;
    	 	return b;
		 }
		 
		  else	if(arr[0][0]=='x'&&arr[1][0]=='x'&&arr[2][0]=='x')
    	 {
    	 	b=1;
    	 	return b;
		 }
		  else	if(arr[0][0]=='o'&&arr[1][0]=='o'&&arr[2][0]=='o')
    	 {
    	 	b=1;
    	 	return b;
		 }
		 
		   else	if(arr[0][0]=='x'&&arr[1][1]=='x'&&arr[2][2]=='x')
    	 {
    	 	b=1;
    	 	return b;
		 }
		  else	if(arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][2]=='o')
    	 {
    	 	b=1;
    	 	return b;
		 }
		 
		    else	if(arr[0][1]=='x'&&arr[1][1]=='x'&&arr[2][1]=='x')
    	 {
    	 	b=1;
    	 	return b;
		 }
		  else	if(arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][1]=='o')
    	 {
    	 	b=1;
    	 	return b;
		 }
		 
		     else	if(arr[0][2]=='x'&&arr[1][2]=='x'&&arr[2][2]=='x')
    	 {
    	 	b=1;
    	 	return b;
		 }
		  else	if(arr[0][2]=='o'&&arr[1][2]=='o'&&arr[2][2]=='o')
    	 {
    	 	b=1;
    	 	return b;
		 }
		      else	if(arr[0][2]=='x'&&arr[1][1]=='x'&&arr[2][0]=='x')
    	 {
    	 	b=1;
    	 	return b;
		 }
		  else	if(arr[0][2]=='o'&&arr[1][1]=='o'&&arr[2][0]=='o')
    	 {
    	 	b=1;
    	 	return b;
		 }
		      else	if(arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='x')
    	 {
    	 	b=1;
    	 	return b;
		 }
		  else	if(arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='o')
    	 {
    	 	b=1;
    	 	return b;
		 }
		 	 else	if(arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='x')
    	 {
    	 	b=1;
    	 	return b;
		 }
		  else	if(arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='o')
    	 {
    	 	b=1;
    	 	return b;
		 }
	}
    return 0;
}
int main()
{
	char a[10],b[10],d[10];
	int c=0,i;
	printf("\t\t\t\t TIC TAC TOE \n\n\n");
	board('0','0',c);
    printf("\n\n\t\t\tCHOOSE THE NUMBERS FROM THE ABOVE BOARD\n");
    for(i=0;i<5;i++)
    {
    	first:
       printf("\n\n\t\t\tPlayer 1:");
       fflush(stdin);
       scanf("%c",&a[0]);
       printf("\n\n");
        ++c;
	   int count=board(a[0],'x',c);
	   if(count==1)
	   {
	   	printf("\n\n\t\t\t Player one won the match");
	   	break;
	   }
	   second:
	   printf("\n\n\t\t\tPlayer 2:");
	   fflush(stdin);
       scanf("%c",&b[0]);
       printf("\n\n");
       ++c;
	   int mount=board(b[0],'o',c);
	   if(mount==1)
	   	{
	   		printf("\n\n\t\t\t Player one won the match");
	   		break;
		}
    }
}
