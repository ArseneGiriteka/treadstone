#include"entete.h"

double addition(double a,double b)
{
	int add;
	add=a+b;
	return add;
}

double soustraction(double a,double b)
{
	return a-b;
}
double multiplication(double a,double b)
{
	return a*b;
}

double division(double a,double b)
{
	if(b!=0) return a/b;
}

double power(double a,double b)
{
	double power(1);
	for(int i=0;i<b;i++)
	{
		power*=a;
	}
	return power;
}

double racine(double a,double b)
{
	double root(1);
	for(int i(0);i<b;i++)
	{
		root/=a;
	}
	return root;
}
