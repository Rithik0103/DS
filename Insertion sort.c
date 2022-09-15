#include<stdio.h>
int main(){
	int a[100],temp,i,j,n;
	printf("Enter the Number of Elements in the Array : ");
	scanf("%d",&n);
	for(i = 0; i <n;i++){
		printf("Enter : ");
		scanf("%d",&a[i]);
	}
	printf("\nThe unsorted array is : \n");
	for(i = 0;i<n;i++){
		printf("%d\t",a[i]);
	}
	for(i = 0;i <n;i++){
		temp = a[i];
		j = i -1;
		while(j>=0 && temp <= a[j]){
			a[j+1] = a[j];
			j = j- 1;
		}
		a[j+1] = temp;
	}
	printf("\nThe Sorted Array is : \n");
	for(i = 0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
