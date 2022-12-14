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
	getchar();
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
void addAtFirst(){
	
	struct Node *newNode = createNode();
	
	if(head==NULL){
		head =newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}	
}
void addLast(){

	addNode();
}
int addAtPos(int pos){
	
	int cnt = count();
	if(pos <1 || pos>cnt+2){

		printf("You have entered wrong pos\n");
		return -1;
	}else if(pos==1){
		addAtFirst();
	}else if(pos==cnt+1){
		addLast();
	}
	else{

		struct Node *newNode = createNode();
		struct Node *temp = head;
		while(pos-2){ // If someone enters position greater than count of Linkedlist
		
			temp =temp->next;
			pos--;
	       }

	newNode->next = temp->next;
	temp->next = newNode;
	}
	
}

int strCount(char *str){
	char *temp=str;
	int count=0;
	while(*temp!='\0'){
		temp++;
		count++;
	}
	return count;
}

void printLL(){
	struct Node *temp=head;
	while(temp!=NULL){
		printf("%s ",temp->str);
		temp=temp->next;
	}
}
int printstrCount(){

	if(head==NULL){
		printf("LL is empty\n");
		return -1;
	}
	else{
	
		int num;
		printf("\n Enter the length\n");
		scanf("%d",&num);
		struct Node *temp=head;
		while(temp!=NULL){
			if(strCount(temp->str)==num){
				printf("%s",temp->str);
			}
			temp=temp->next;
		}
	}
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
			if(strCount(temp->str)!=num){
				temp=temp->next;
				delAtPos(index);
				index--;
				continue;
			}
			temp=temp->next;
		}
	}
}
void main(){

	char ch;
	int pos,pos1,num,nd;

	do{
		printf("Which Operation do You want : \n");
		printf("1.addNode\n");
		printf("2.Count Nodes in Linked List\n");
		printf("3.Add at First\n");
		printf("4.Add at Position\n");
		printf("5.Add at last \n");
		printf("6.Delete first\n");
		printf("7.Delete at Position\n");
		printf("8.Delete last\n");
		printf("9.Print Linked List\n");
        printf("10.Print String on basis of its length\n");

		int choice;
		printf("\nEnter Your Choice : \n");
		scanf("%d",&choice);

		switch(choice){

			case 1 : 
				printf("How Many Nodes Do You want to create : ");
				scanf("%d",&nd);
				for(int i=0 ; i<nd ; i++){
					addNode();
				}
				break;
			case 2 : 
				printf("Count of Nodes in Linked List Are : %d",count());
				break;
			case 3 : 
				addAtFirst();
				break;
			case 4 : 
				printf("At which Position do You want to insert : \n");
				scanf("%d",&pos);
				addAtPos(pos);
				break;
			case 5 :
				addLast();
				break;
			case 6 :
				delFirst();
				break;
			case 7 : 
				printf("At which position do you want to delete : \n");
				scanf("%d",&pos1);
				delAtPos(pos1);
				break;
			case 8 :
				delAtLast();
				break;
			case 9 :
				printLL();
				break;
			case 10 :
				printstrCount();
                break;
			default :
				printf("Invalid Input !");
		
		
		}
		printf("\nDo you want any other Functionalities again if yes type 'Y' || 'y' : ");
		scanf(" %c",&ch);
	}
	while(ch=='y'||ch=='Y');


}

