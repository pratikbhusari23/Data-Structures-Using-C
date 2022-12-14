#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct data{

	int data;
	struct data * next;
}d;

d * head = NULL;

d *  createNode(){
	
	d * newNode = (d*)malloc(sizeof(d));
	
	printf("Enter Data : ");
	scanf("%d",&newNode->data);

	newNode->next=NULL;
	return newNode;

}
void addnode(){

	d * newNode=createNode();

	if(head==NULL){
		head=newNode;
	}
	else{
		d *temp=head;
		while(temp->next != NULL){

			temp=temp->next;
		}
		temp->next=newNode;
	}
}

int count(){
	
	int count=0;

	d * temp=head;
	while(temp!=NULL){

		count++;
		temp=temp->next;
	}
	return count;

}
void addAtfirst(){
	
	d *newNode=createNode();

	if(head == NULL){
		head=newNode;
	}
	else {
		newNode->next=head;
		head=newNode;
	}

}
void addAtlast(){
	addnode();
}

int addAtpos(int pos){
	
	int cnt = count();
	if(pos < 1 || pos >cnt +1){

		printf("Ohhhh Noooo ! You entered invalid position");
		return -1;
	}
	else {
		if(pos==1){

			addAtfirst();

		}
		else if(pos==cnt+1){

			addAtlast();
		
		}
		else {
		
			d * newNode = createNode();
			d * temp = head;

			while(pos-2){

				temp = temp->next;
				pos--;
			}
			newNode->next=temp->next;
			temp->next=newNode;
		}
		return 0;
	}
}
void deletefirst(){
	
	d *temp= head;

	if(head==NULL){

		printf("Your Linked List is empty");
	
	}
	else {
		head=temp->next;
		free(temp);
	}
}

int deleteAtpos(int pos){
	
	d * temp=head;
	int cnt=count();

	if(pos < 1 || pos>cnt){

		printf("You entered wrong position");
		return -1;
	}
	else{
		if(pos==1){

			deletefirst();
		}
		while(pos-2 && (temp->next!=NULL)){

			temp=temp->next;
			pos--;
		}
		d * temp2=temp->next;
		temp->next=temp->next->next;
		temp2->next=NULL;
		free(temp2);
	
	}


}

void deleteAtlast(){
	
	d * temp=head;
	if(head==NULL){

		printf("Your linked list is empty");
	}
	while(temp->next->next!=NULL){

		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
}
void printll(){
	
	d * temp=head;

	if(head==NULL){
		printf("Your Linked List is Empty !");
	}
	else {
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|",temp->data);
	}
}

int FirstOccurence(int num){

	int cnt=0,flag=1;
	d * temp=head;
	if(temp==NULL){
		printf("Your Linked List is Empty\n");	
	return -1;
	}
	else {
		while(temp!=NULL){  
			cnt++;
			if(temp->data==num){
				flag=0;
				printf("First Occurence of %d at Position %d",num,cnt);
				break;
			}	
			temp=temp->next;
		}
		if(flag==1){
			printf("Number Not Present in Linked List");
		
		}

	}
}

int secondLastOccurence(int num){

	d * temp=head;
	int cnt=1,occur2=0,occur1=1;

	while(temp!=NULL){
		if(temp->data==num){
			occur2=occur1;
			occur1=cnt;
		}
		cnt++;
		temp=temp->next;
	}
	if(occur2==0){
		printf("%d is not present in Linked List",num);
 	
	}
	else if(occur2==1){
		printf("%d Occured Only once at %d",num,occur1);
	}
	else {
		printf("second last occurence of %d is at %d",num,occur2);
	}
}

int LastOccurence(int num){
	
	d * temp=head;

	int cnt=1,pos,flag=1;
	
	while(temp!=NULL){

		if(temp->data==num){
			flag=1;
			pos=cnt;
		}
		cnt++;
		temp=temp->next;
	}
	if(flag==0){
		printf("%d is not present in Linked List",num);
 	
	}
	else {
		printf("Last occurence of %d is at %d",num,pos);
	}
}

int TotalOccurence(int num){

	d * temp=head;

	int cnt=0,flag=1;
	
	while(temp!=NULL){

		if(temp->data==num){
			flag=1;
			cnt++;	
		}
		temp=temp->next;
	}
	if(flag==0){
		printf("%d is not present in Linked List",num);
 	
	}
	else {
		printf("Total Occurence of %d is %d",num,cnt);
	}
}

int addDataofNode(){
	
	d * temp=head;

	while(temp!=NULL){
		
		int sum=0;
		int temp1=temp->data;
		while(temp1!=0){
			sum=sum+temp1%10;
			temp1=temp1/10;
		}
		temp->data=sum;
		temp=temp->next;
		
	}
}

int PalindromeNode(){
	
	d * temp=head;
	
	int sum=0,temp1,rem,cnt=0;

	while(temp!=NULL){
	
		temp1=temp->data;
		cnt++;
		while(temp->data){

			rem=temp->data%10;
			sum=(sum*10)+rem;
			temp->data=temp->data/10;		

		}	
		if(temp1==sum){
			printf("Palindrome Found at position %d ",cnt);
		}
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
		printf("10.Check First Occurence\n");
		printf("11.Check Second Last\n");
		printf("12.Check Last Occurence\n");
		printf("13.Check Total Occurences\n");
		printf("14.Add Data of a Node\n");
		printf("15.Check Nodes That are palindrome\n");

		int choice;
		printf("\nEnter Your Choice : \n");
		scanf("%d",&choice);

		switch(choice){

			case 1 : 
				printf("How Many Nodes Do You want to create : ");
				scanf("%d",&nd);
				for(int i=0 ; i<nd ; i++){
					addnode();
				}
				break;
			case 2 : 
				printf("Count of Nodes in Linked List Are : %d",count());
				break;
			case 3 : 
				addAtfirst();
				break;
			case 4 : 
				printf("At which Position do You want to insert : \n");
				scanf("%d",&pos);
				addAtpos(pos);
				break;
			case 5 :
				addAtlast();
				break;
			case 6 : 
				deletefirst();
				break;
			case 7 : 
				printf("At which position do you want to delete : \n");
				scanf("%d",&pos1);
				deleteAtpos(pos1);
				break;
			case 8 :
				deleteAtlast();
				break;
			case 9 :
				printll();
				break;
			case 10 :
				printf("Which No do you want to search ?\n");
				scanf("%d",&num);
				FirstOccurence(num);
				break;
			case 11 :
				printf("Which num do you want to search ?\n");
				scanf("%d",&num);
				secondLastOccurence(num);
				break;
			case 12 :
				printf("Which num do you want to search ?\n");
				scanf("%d",&num);
				LastOccurence(num);
				break;
			case 13 : 
				printf("Which num do you want to search ?\n");
				scanf("%d",&num);
				TotalOccurence(num);
				break;
			case 14 :
				addDataofNode();
				break;
			case 15 :
				PalindromeNode();
				break;
			default :
				printf("Invalid Input !");
		
		
		}
		getchar();
		printf("\nDo you want any other Functionalities again if yes type 'Y' || 'y' : ");
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='Y');


}
