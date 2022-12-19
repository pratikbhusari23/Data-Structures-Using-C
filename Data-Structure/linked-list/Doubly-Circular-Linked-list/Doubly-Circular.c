#include<stdio.h>
#include<stdlib.h>

typedef struct Node {

    struct Node * prev;
    int data;
    struct Node * next;
}nd;

nd * head = NULL;

nd * createNode(){

    nd * newNode=(nd*)malloc(sizeof(nd));

    printf("Enter Data : ");
    scanf("%d",&newNode->data);

    newNode->prev=NULL;
    newNode->next=NULL;

    return newNode;
}

void addNode(){

    nd * newNode=createNode();

    if(head==NULL){
        head=newNode;
        head->next=head;
        head->prev=head;
    }
    else {

        head->prev->next=newNode;
        newNode->prev=head->prev;
        newNode->next=head;
        head->prev=newNode;
    }
}

int count(){

	nd * temp =head;
	int cnt = 0;
	while(temp->next!=head){
		cnt++;
		temp=temp->next;
	}
    cnt++;
	return cnt;
}
void addAtFirst(){

    nd * newNode=createNode();

    if(head==NULL){
        head=newNode;
        head->next=head;
        head->prev=head;
    }
    else{

        head->prev->next=newNode;
        newNode->prev=head->prev;
        head->prev=newNode;
        newNode->next=head;
        head=newNode;

    }
}

void addAtLast(){

    addNode();
}

int addAtPos(int pos){

    nd * newNode=createNode();
    
    int cnt=count();

    if(head==NULL){
        head=newNode;
    }
    else if(pos<1 || pos>cnt+1){
        printf("Invalid Position Entered !");
    }
    else if(pos==1){
        addAtFirst();
    }
    else if(pos==cnt+1){

        addAtLast();
    }
    else {

        
        nd * temp=head;

        while(pos-2){

            temp=temp->next;
            pos--;
  
        }
        newNode->next=temp->next;
        newNode->next->prev=newNode;
        newNode->prev=temp;
        temp->next=newNode;
    }
}

void deleteFirst(){

    int cnt=count();

    if(head==NULL){

        printf("Your Linked List is empty ");
    }
    else if(cnt==1){

        free(head);
        head=NULL;

    }
    else {
        
        head=head->next;
        head->prev=head->prev->prev;
        free(head->prev->next);
        head->prev->next=head;
        
    }
}

void deleteLast(){
    if(head==NULL){
        printf("Your Linked list is Empty");
    }
    else if(head->next==head){
        deleteFirst();
    }
    else {

        head->prev=head->prev->prev;
        free(head->prev->next);
        head->prev->next=head;
    }
}

int deleteAtpos(int pos){

    int cnt=count();

    if(head==NULL){
        printf("Your Linked List is Empty");
    }
    else if(pos<1 || pos>cnt){

        printf("Invalid Position Entered ");

    }
    else if(pos==cnt){
            deleteLast();
    }
    else if(pos==1){
        deleteFirst();
    }
    else {

        nd * temp=head;

        while(pos-2){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }
}
void printSCLL(){
	
	nd * temp=head;

	if(head==NULL){
		printf("Your Linked List is Empty !");
	}
	else {
		while(temp->next!=head){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|",temp->data);
	}

}

void checkDoubly(){

    nd * temp=head;

    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
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

		int choice;
		printf("Enter Your Choice : \n");
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
				addAtLast();
				break;
			case 6 : 
				deleteFirst();
				break;
			case 7 : 
				printf("At which position do you want to delete : \n");
				scanf("%d",&pos1);
				deleteAtpos(pos1);
				break;
			case 8 :
				deleteLast();
				break;
			case 9 :
				printSCLL();
				break;
            case 10 :
                checkDoubly();
                break;
			default :
				printf("Invalid Input : ");
		
		
		}
		getchar();
		printf("\nDo you want any other Functionalities again if yes type 'Y' || 'y' : ");
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='Y');


}
