#include<stdio.h>

int main()
{
	int n=1;
	int div=1;
	scanf("%d",&n);
	
	
	do
	{
		if(n%div==0)
		printf("%d ",div);
		div++;
	}while(div<=n);
}
