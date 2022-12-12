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
int countStr(char *str){
	int count=0;
	while(*str!='\0'){
		str++;
		count++;
	}
	return count;

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

void delFirst(){

	if(head==NULL){
		printf("Already empty\n");
	}	
	else{
		struct Node *temp=head;
		head=head->next;
		free(temp);
	}

}

void delAtLast(){

	if(head==NULL){
		printf("Already empty\n");
	}	
	else if (count()==1){
		free(head);
		head=NULL;
	}
	else{
		struct Node *temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}

void delAtPos(int pos){
	
	if(head==NULL){
		printf("ll is empty\n");
	}
	else if(pos==1){
		struct Node *temp=head;
		head=head->next;
		free(temp);
	}
	else if (pos<=0 || pos>count()){
		printf("invalid pos\n");	
	}
	else if(pos==count()){

		delAtLast();
	}
	else{
		struct Node *temp=head;
		while(pos-2){
			temp=temp->next;
			pos--;
		}
		struct Node *temp2=temp;
		temp->next=temp->next->next;
		free(temp2->next);

	}
}




void equalLength(){

	if(head==NULL){
		printf("Ll is empty\n");
	}
	else{
		int num;
		printf("\nEnter the number\n");
		scanf("%d",&num);
		struct Node *temp=head;
		int index=0;
		while(temp!=NULL){
			index++;
			if(countStr(temp->str)!=num){
				temp=temp->next;
				delAtPos(index);
				index--;
				continue;
			}
			temp=temp->next;
		}
	}
}





void printLL(){
	struct Node *temp=head;
	while(temp!=NULL){
		printf("|%s->|",temp->str);
		temp=temp->next;
	}
	printf("\n");
}

void main(){

	addNode();
	addNode();
	addNode();
	addNode();
	printLL();
	equalLength();
//	int x;
	//printf("Enter pos\n");
	//scanf("%d",&x);
	//delAtPos(x);
	printLL();
}


















