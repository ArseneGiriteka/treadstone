#include<stdio.h>
#include<string.h>
int main()
{
	char phrase[50];
	char sphrase[10];
	int comp;
	char *reslt;
	gets(phrase);
	gets(sphrase);
	
	comp=strcmp(phrase,sphrase);
	if(comp>0)printf("ce pt mot vient avant");
	else if(comp<0)printf("ce pt mot vient apres");
	else//comp vaut zero
	{printf("identiques");
	}

	reslt =  strstr(phrase,sphrase);
	printf("\nla recherche tourne %d",reslt);
	printf("\n =%d",sizeof(*reslt+100));
}
