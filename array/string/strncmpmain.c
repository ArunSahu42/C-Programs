#include<stdio.h>
#include<string.h>
#include "mystring.h"
int main()
{
	int n;
	char a[100],b[100];
	printf("Enter string1:");
	fgets(a,100,stdin);
	printf("Enter string2:");
	fgets(b,100,stdin);
	printf("Enter the no. of letters to compare:");
	scanf("%d",&n);
	printf("%d\n",mystrncmp(a,b,n));
}
