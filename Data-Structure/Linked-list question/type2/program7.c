#include <stdio.h>
#include <stdlib.h>
struct Node {
	char str[20];
	struct Node *next;
};

struct Node *head=NULL;

struct Node *createNode(){
	struct Node *node=(struct Node *)malloc(sizeof(struct Node));
	
	char ch;
	int i=0;
	printf("Enter the String\n");
	while((ch=getchar())!='\n'){
		node->str[i]=ch;
		i++;
	}
	node->str[i]='\0';
	node->next=NULL;
	return node;
}
void addNode(){
	
	struct Node *node=createNode();
	if(head==NULL){
		head=node;
	}
	else{
		struct Node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}
int count(){
	struct Node *temp=head;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return  count;
}
void reverseString(char *str){
	char *temp=str;
	while(*temp!='\0'){
		temp++;
	}
	temp--;
	while(str<temp){
		char ch=*str;
		*str=*temp;
		*temp=ch;
		str++;
		temp--;
	}
}

void revData(){

	if(head==NULL){
		printf("LL is empty\n");
	}
	else{
		
		struct Node *temp=head;
		while(temp!=NULL){
			reverseString(temp->str);
			temp=temp->next;
		}
	}
}
void printLL(){
	struct Node *temp=head;
	while(temp!=NULL){
		printf("%s ",temp->str);
		temp=temp->next;
	}
}

void main(){

	addNode();
	addNode();
	addNode();
	printLL();
	revData();
	printLL();
}


















