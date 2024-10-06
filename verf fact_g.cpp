#include<stdio.h>
#include<string.h>
int main()
{
	char source[100];
	char fact_g[100];
	int leinght=0;
	int i=0;
	gets(source);
	gets(fact_g);
	leinght=strlen(fact_g);
	  for(i=0;i<leinght;i++)
	  if(source[i]==fact_g[i])
	  printf("oui");
	  else 
	  printf("non");
}
