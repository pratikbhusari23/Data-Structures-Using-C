#include<stdio.h>

int front=-1,rear=-1,size=0,flag=0;

int enqueue(int arr[]){
    if((rear==size-1 && front==0) || (rear==front-1)){
        printf("Queue is Full\n");
        return -1;
    }
    else{
        
        if(front==-1){
            front++;
        }
        else if(rear==size-1 && front!=0){
            rear=-1;
        }
    
        rear++;

        printf("Enter Data :\n");
        scanf("%d",&arr[rear]);

        return 0;
    }
}

int dequeue(int arr[]){

    if(front==-1){
        printf("Queue is Empty\n");
        flag=0;
        return -1;
    }
    else {

        flag=1;
        int data = arr[front];

        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            if(front==size-1){
                front=-1;
            }
            front++;
        }
        return data;
    }
 
}
    
int main(){
    printf("Enter The Size of Queue\n");
    scanf("%d",&size);
    int arr[size];
    int choice;
    do{
        printf("Enter Your Choice\n");
        printf("1.Enqueue\n2.Dequeue\n3.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue(arr);
                break;

            case 2:
                    {
                int data=dequeue(arr);

                if(flag==1){
                    printf("The Data dequeued is : %d\n",dequeue(arr));
                }
                else{
                    printf("The Data dequeued is : %d\n",data);
                }
                break;
                    }
            case 3:
                break;

            default:
                printf("Invalid Choice\n");
        }
    }while(choice!=3);

}