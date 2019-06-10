#include<stdio.h>
#include<stdlib.h>
struct player 
{
	char na[100];
	int score;
};
int input(int n,struct player p[50])
{
	printf("enter the no of players:");
	scanf("%d",&n);	
	for(int i=0;i<n;i++)
	{

		printf("enter the name of player %d :",i+1);
		scanf("%s",p[i].na);
	}
	return n;
}
int calculate(struct player p[50],int n)
{
	int i,j,k,h=0;
	for(i=0;i<n;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			printf("enter the score of %s for round %d: ",p[i].na,j+1);
			scanf("%d",&p[i].score);
			k=k+p[i].score+rand();
		}
		p[i].score=k;
		printf("the score of player %d is %d: ",i+1,p[i].score);
		printf("\n");
	}
	h=p[0].score;
	for(i=1;i<n;i++)
	{
		if(p[i].score>h)
		{
			 h=p[i].score;
		}
	}
	return h;
}
void display(int h,int n,struct player p[])
{

	for(int i=0;i<n;i++)
	{
		if(h==p[i].score)
	        printf("the winner is %s ",p[i].na);
	}
}																																																		
int main()
{
	struct player p[50];
	int n=input(n,p);
        int d= calculate(p,n);
	display(d,n,p);

}
