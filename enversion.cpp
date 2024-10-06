#include<stdio.h>
int main()
{
	char nom[10];
	int i=0;
	
	while((nom[i]=getchar()) != EOF&&i<10)
	{
	  nom[i]=getchar();
	  i++;
	}
	do 
	{
		printf("%c",nom);
		i--;
	}while(i>10);
}

