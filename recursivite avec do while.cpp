#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d\n",&x);
	scanf("%d",&y);
	while(y>=1){
	x=x*2;
	y=y/2;
	printf("%d * %d\n",x,y);
	
}
}
