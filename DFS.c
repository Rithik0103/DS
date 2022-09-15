#include<stdio.h>
void dfs(int);
int g[10][10],v[10],n;
void main(){
	int i,j;
	printf("Enter the Number of Vertices : ");
	scanf("%d",&n);
	printf("ADJACENCY MATRIX : \n");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			scanf("%d",&g[i][j]);
		}
	}
	for(i = 0;i < n;i++){
		v[i] = 0;
	}
	dfs(0);
}
void dfs(int i){
	int j;
	printf("%d\n",i);
	v[i] = 1;
	for(j = 0;j < n;j++){
		if(!v[j] && g[i][j] == 1){
			dfs(j);
		}
	}
}
