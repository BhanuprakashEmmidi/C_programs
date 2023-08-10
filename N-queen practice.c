#include<stdio.h>
#include<math.h>
int board[20],count;
int main()
{
	int n;
	void queen(int row,int n);
	printf("***N-Queen problem using Backtracking***");
	printf("\nEnter No. of Queen :");
	scanf("%d",&n);
	queen(1,n);
	return 0;
}
void queen(int row,int n)
{
	int col;
	for(col=1;col<=n;++col)
	{
		if(place(row,col))
		{
			board[row]=col;
			if(row==n)
			 print(n);
			else
			 queen(row+1,n);
		}
	}
}
int place(int row,int col)
{
	int i;
	for(i=1;i<=row-1;++i)
	{
		if(board[row]==col)
		 return 0;
		else
		 if(abs(board[i]-col)==abs(i-row))
		  return 0;
		else
		 return 1;
	}
}
void print(int n)
{
	int i,j;
	printf("\n\nSolution %d :",++count);
	for(i=0;i<=n;++i)
	printf("\t%d",i);
	for(i=0;i<=n;++i)
	{
	printf("\n\n%d",i);
	for(j=0;j<=n;++j)
	{
		if(board[i]==j)
		 printf("\tQ");
		else
		 printf("\t-");
	}
	}
}
