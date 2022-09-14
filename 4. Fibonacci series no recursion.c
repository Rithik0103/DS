#include<stdio.h>
int main()
{
	 int n,i,t=1,k,a;
	 printf("enter limit : ");
	 scanf("%d",&n);
	 printf("\nfibonacci series = 0,");
	 for(i=1;i<=n-1;i++)
	 {
	 	a=k;
	 	k=k+t;
	 	t=a;
	 	printf("%d,",k);
	 }
}
