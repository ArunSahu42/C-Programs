#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf("%d\t",fibo(i));
}
int fibo(int n)
{
	if((n==1)||(n==2))
		return 1;
	return fibo(n-1)+fibo(n-2);
}
