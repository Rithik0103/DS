#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node*head,*tail;
void insert(){
	struct node* n = (struct node*)malloc(sizeof(struct node*));
	int num;
	if(n == NULL){
		printf("Overflow!!\n");
	}
	else{
		printf("Enter the Value you want to Insert : ");
		scanf("%d",&num);
		n->data = num;
		n->next = head;
		head = n;
	}
}
void del(){
	int pos,i;
	struct node*temp = head;
	struct node*j = head;
	printf("Enter the position to be deleted : ");
	scanf("%d",&pos);
	for(i = 0;i<pos-1;i++){
		temp = temp->next;
	}
	for(i = 0;i < pos-2;i++){
		j = j->next;
	}
	j->next = temp->next;
	temp->next = NULL;
	free(temp);
}
void display(){
	struct node* n;
	n = head;
	if(n == NULL){
		printf("Nothing to Show!!!");
	}
	else{
		printf("The Elements are : \n");
		while(n!=NULL){
			printf("%d\t",n->data);
			n = n->next;
		}
	}
}
int main(){
	int a,i;
	printf("Enter how many elements you want to Insert : ");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		insert();
	}
	printf("\n");
	display();
	printf("\n\n");
	del();
	display();
	return 0;
}
