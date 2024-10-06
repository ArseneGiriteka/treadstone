#include<stdio.h>
#include<string.h>

int main(void)
{
	
	char* adr;
	gets(adr);
	puts(adr);
	printf("%d\n",adr);
	printf(" &adr = %d      *(&adr) = %d     *adr = %d",&adr,*(&adr),*adr);
}
