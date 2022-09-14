#include<stdio.h>
int fact(int);
int main(){
	int a;
	printf("Enter the Number : ");
	if(!(scanf("%d",&a)) || a < 0){
		printf("Invalid Input!!");
	}
	else{
		printf("The Factorial of the number is : ");
		printf("%d",fact(a));
	}
	return 0;
}
int fact(int n){
	while(n != 0){
		return n*fact(n-1);
	}
	return 1;
}
