#include<stdio.h>
int main()
{
	int i;
	char tab[]={'a','b','a','n','a'};
	for(i=0;i<sizeof(tab);i++)
	printf("%c",tab[i]);
	
}
