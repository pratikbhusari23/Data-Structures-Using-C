#include<stdio.h>

int size ,front,rear,flag=0;

int enqueue(int arr[]){

    if(rear==size-1){
        return -1;
    }
    if(front==-1){

        front++;
    }
    rear++;
    printf("Enter The Data\n");
    scanf("%d",&arr[rear]);

    return 0;
}

int dequeue(int arr[]){

    for(int i=0 ; i<3 ; i++){

        printf("%d",arr[i]);
    }
    printf("\n");

    if(front==-1){
        flag=0;
        return -1;
    }
    else {

        printf("%d front : \n",front);
        printf("%d read : \n",rear);
        int data = arr[front];

        if(front==rear){

            front=rear=-1;
        }
        else {

            front ++;
        }
        flag=1;
        return data;
    }
}

void main(){

    printf("Enter The Queue Size :\n");
    scanf("%d",&size);

    int arr[size];
    front=-1;
    rear=-1;

    char y;

    do{

        printf("1.Enqueue\n");
        printf("2.dequeue\n");
        
        int z;

        scanf("%d",&z);
        switch (z){

            case 1 :
                {
                    int data =enqueue(arr);
                    if(data==-1){
                        printf("Queue is Full\n");
                    }
                    else {
                        printf("Queue Pushed\n");
                        break;
                    }
                }
            case 2 :
                {
                    int data = dequeue(arr);
                    if(flag==0){

                        printf("Queue Already Empty !");
                    }
                    else {
                        printf("%d : dequeued data : \n",data);
                    }
                    break;
                }
            default :

                printf("Invalid Option");
        }
        printf("Do You want to Continue\n ");
        getchar();
        scanf("%c",&y);
    }
    while(y=='y' || y=='Y');
}
        