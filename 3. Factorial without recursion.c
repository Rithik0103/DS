#include<stdio.h>
int main()
{
	int t=1,n,i;
	printf("enter n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=t*i;
	}
	printf("\nfactorial of %d is %d",n,t);
}
