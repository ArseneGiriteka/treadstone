#include<stdio.h>

int main()
{
	int a=1;
	int b=2;
	int* ad;
	ad=&a;
	printf(" &a = %d\nad = %d\n",&a,ad);
	printf("*ad=%d;\n ad+1=%d;\n *(ad+1)=%d\n*(ad+3)=%d",*ad,ad+1,*(ad+1),*(ad+3));
	printf("&b=%d;;;*(&b)=%d;;;;&(*(&b))=%d",&b,*(&b),&(*(&b)));
	
}
